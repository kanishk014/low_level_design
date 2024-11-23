#include <bits/stdc++.h>
#include "ImageInterface.hpp"
#include "ProxyImage.hpp"
using namespace std;

int main()
{
  ImageInterface *image = new ProxyImage("elephant_image.jpg");
  image->display();
  image->display();
  return 0;
}