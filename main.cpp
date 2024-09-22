#include "menu.cpp"
#include "queue.cpp"
#include "coord3d.cpp"
int main()
{
     int alegere1{1};
     int alegere2;
     int c1,c2,c3;
     double n;
     Coord3d p1,p2;
     Queue q1,q2,q3;

    while (alegere1 != 0) {
        mainMenu();
        std::cin >> alegere1;
        
        switch (alegere1) {
            case 1:
                alegere2 = 1;
                while (alegere2 != 0) {
                    coordMenu();
                    std::cin >> alegere2;
                    
                    switch (alegere2) {
                        case 1:
                            std::cout << "Da cele trei coordonate \n";
                            std::cin >> c1 >> c2 >> c3;
                            p1 = Coord3d(c1, c2, c3);
                            break;
                        case 2:
                            std::cout << "Da cele trei coordonate \n";
                            std::cin >> c1 >> c2 >> c3;
                            p2 = Coord3d(c1, c2, c3);
                            break;
                        case 3:
                            std::cout << "Da numarul \n";
                            std::cin >> n;
                            p2 = p2 + n;
                            break;
                        case 4:
                            p1 = p1 + p2;
                            break;
                        case 5:
                            std::cout << "Da numarul \n";
                            std::cin >> n;
                            p1 = p1 - n;
                            break;
                        case 6:
                            if (p1 > p2)
                                std::cout << "P1 e mai mare \n";
                            else if (p1 < p2)
                                std::cout << "P2 e mai mare \n";
                            else
                                std::cout << "Sunt egale \n";
                            break;
                        case 7:
                             p1.readCoords();
                             p2.readCoords();
                             break;
                        default:
                            break;
                    }
                }
                break;

                case 2:
                alegere2 = 1;
                while (alegere2 != 0)
                {
                  queueMenu();
                  std::cin >> alegere2;
                  switch (alegere2)
                  {
                  case 1:
                    std::cin >> q1;
                    break;
                  
                  case 2:
                    std::cin >> q2;
                  break;

                  case 3:
                    q3 = q1 + q2;
                  break;
                  
                  case 4:
                    if (q1 == q2)
                    {
                      std::cout << "Sunt egale \n";
                    }
                    else
                    {
                      std::cout << "Nu sunt egale \n";
                    }
                  break;
                  case 5:
                   if (q1 > q2)
                   {
                    std::cout << "q1 e mai mare \n";
                   }
                   if (q1 < q2)
                   {
                    std::cout << "q2 e mai mare \n";
                   }

                  break;

                  case 6:
                  std::cout << "q1 " << q1 << '\n';
                  std::cout << "q2 " << q2 << '\n';
                  std::cout << "q3 " << q3 << '\n';
                  break;
                  default:
                    break;
                  }
                }
                
                break;

            default:
                break;
        }
    }
   return 0;
}