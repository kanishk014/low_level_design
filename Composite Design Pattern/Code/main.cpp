#include <bits/stdc++.h>
#include "Directory.hpp"
#include "File.hpp"

using namespace std;

int main() {
  Directory *movieDirectory = new Directory("Movie");
  FileSystemInterface *borderMovie = new File("Border");

  movieDirectory->add(borderMovie);

  Directory *comedyMovieDirectory = new Directory("ComedyMovie");
  comedyMovieDirectory->add(new File("Hulchul"));

  movieDirectory->add(comedyMovieDirectory);

  movieDirectory->ls();

  return 0;
}