#include <iostream>
#include <cmath>

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  const double A = 1.0;
  const double B = 1.0;
  double c = 0.1;

  for(int ii = 0; ii < 10; ii++)
    {
      //Raices calculadas de la primera forma
      double root1 = (-B + std::sqrt(B*B-4*A*c))/(2*A);
      double root2 = (-B - std::sqrt(B*B-4*A*c))/(2*A);

      //Raices calculadas de la segunda forma
      double root3 = (-2)*c/(B + std::sqrt(B*B-4*A*c));
      double root4 = (-2)*c/(B - std::sqrt(B*B-4*A*c));

      std::cout << c << '\t' << root1 << '\t' << root2 << '\t'
		<< root3 << '\t' << root4 << '\n';
	
      c /= 10;
    }

  return 0;
}
