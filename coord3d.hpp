class Coord3d
{
private:
    double c_x{};
    double c_y{};
    double c_z{};
public:
    Coord3d();
    Coord3d(double);
    Coord3d(double,double,double);
    ~Coord3d() = default;
    void readCoords();
    Coord3d operator+(double);
    Coord3d operator+(const Coord3d&);
    Coord3d operator-(double);
    Coord3d operator-(const Coord3d&);
    void operator=(double);
    void operator=(const Coord3d&);

   friend bool operator==(const Coord3d&,const Coord3d&);
   friend bool operator!=(const Coord3d&,const Coord3d&);
   friend bool operator<(const Coord3d&,const Coord3d&);
   friend bool operator>(const Coord3d&,const Coord3d&);
};
