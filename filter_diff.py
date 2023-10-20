import string, sys

def extract_relevant_diffs(diff_content):
    lines = diff_content.split('\n')
    extracted_diffs = []
    cur_diff = []
    i = 0
    while i < len(lines):
        line = lines[i]

        if line.startswith('diff '):
            if len(cur_diff) > 3:
                extracted_diffs += cur_diff
            cur_diff = [line, lines[i + 1], lines[i + 2]]
            i += 3
        elif line.startswith('@@'):
            chunk = [line]
            rem = []
            add = []
            i += 1
            while i < len(lines) and not (lines[i].startswith('@@') or lines[i].startswith('diff ') or lines[i].startswith('Only in ')):
                chunk.append(lines[i])
                if lines[i].startswith('-'):
                    rem.append(lines[i][1:])
                elif lines[i].startswith('+'):
                    add.append(lines[i][1:])
                i += 1
            
            rem = ''.join(rem).translate({ord(c): None for c in string.whitespace})
            add = ''.join(add).translate({ord(c): None for c in string.whitespace})
            if rem != add:
                cur_diff += chunk
        else:
            print(f"Unexpected line @ {sys.argv[1]}#{i + 1}: {line}", file=sys.stderr)
            i += 1

    if len(cur_diff) > 3:
        extracted_diffs += cur_diff     

    return '\n'.join(extracted_diffs)

with open(sys.argv[1], 'r', errors='ignore') as file:
    diff_content = file.read()

relevant_diffs = extract_relevant_diffs(diff_content)

if relevant_diffs:
    print(relevant_diffs)
