#!/bin/sh
rm -rf diffs
mkdir -p diffs/{orig,filtered}/src/Include
for dir in src src/Include; do
  for d in xray-monolith/$dir/xr*; do
    b=$(basename $d)
    diff -U1 -w -B -r coc-1.4-xray-64/$dir/$b $d > diffs/orig/$dir/$b.diff
    python filter_diff.py diffs/orig/$dir/$b.diff > diffs/filtered/$dir/$b.diff
  done
done