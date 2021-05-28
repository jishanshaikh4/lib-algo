#!/usr/bin/env sh

_() {
  YEAR="2021"
  echo "Github Username: "
  read -r USERNAME

  [ -z "$USERNAME" ] && exit 1
  [ ! -d $YEAR ] #&& mkdir $YEAR

  #cd "${YEAR}" || exit
  git init
  echo "ROBOTS.TXT" \
    >ROBOTS.TXT
  git add .
  GIT_AUTHOR_DATE="${YEAR}-05-28T18:00:00" \
    GIT_COMMITTER_DATE="${YEAR}-05-28T18:00:00" \
    git commit -m "${YEAR}"
  git remote add origin "https://github.com/${USERNAME}/lib-algo.git"
  git branch -M main
  git push -u origin main -f
  cd ..
  #rm -rf "${YEAR}"

  echo
  echo "Cool, check your profile now: https://github.com/${USERNAME}"
} && _

unset -f _
