#!/bin/bash

echo "# Stack realization on C++" >> README.md
git init
git add README.md
git add .
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:lurbaby/kpi_lab_2.git
git push -u origin main
