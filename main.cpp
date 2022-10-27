#include "Author.hpp"
#include "Book.hpp"
#include "Paragraph.hpp"
#include "ImageProxy.hpp"

#include <iostream>
#include <chrono>

int main()
{
  std::chrono::steady_clock::time_point timer_start;
  std::chrono::steady_clock::time_point timer_end;
  double duration = 0.0L;

  // start timer
  timer_start = std::chrono::high_resolution_clock::now();

  ImageProxy img1("Pamela Anderson");
  ImageProxy img2("Kim Kardashin");
  ImageProxy img3("Kirby Griffin");

  Section playboyS1("Front Cover");
  playboyS1.add(img1);

  Section playboyS2("Summer Girls");
  playboyS2.add(img2);
  playboyS2.add(img3);

  Book playboy("Playboy");
  playboy.add(playboyS1);
  playboy.add(playboyS2);

  timer_end = std::chrono::high_resolution_clock::now();

  duration = (double)std::chrono::duration_cast<std::chrono::milliseconds>(timer_end - timer_start).count();

  std::cout << "Creation of the content took " << duration << " miliseconds" << std::endl << std::endl;

  timer_start = std::chrono::high_resolution_clock::now();
  std::cout << playboyS1 << std::endl;
  timer_end = std::chrono::high_resolution_clock::now();
  duration = (double)std::chrono::duration_cast<std::chrono::milliseconds>(timer_end - timer_start).count();
  std::cout << "Printing of the section 1 took " << duration << " miliseconds" << std::endl << std::endl;

  timer_start = std::chrono::high_resolution_clock::now();
  std::cout << playboyS2 << std::endl;
  timer_end = std::chrono::high_resolution_clock::now();
  duration = (double)std::chrono::duration_cast<std::chrono::milliseconds>(timer_end - timer_start).count();
  std::cout << "Printing of the section 2 took " << duration << " miliseconds" << std::endl << std::endl;

  return 0;
}
