//#include <iostream>
//using namespace std;
//
//int main()
//{
////Distance struct that we have seen before!
//struct distance
//{
//int meters;
//int centimeters;
//};
//
////Define Room Struct
//struct room
//{
////member length is another struct !!
//char name[50]; //allowed to enter 1 word only
//distance length;
//distance width;
//float area;
//};
//
//
////Declare a main variable 
////room living={{10,17},{12,10}};
////initialize variable members
////living.length.meters = 10;
////living.length.centimeters = 17;
////living.width.meters = 12;
////living.width.centimeters = 10;
//room r;
//
//
//cout<<"Enter room name: ";
//cin>>r.name;
//cout<<"Enter "<<r.name<<" length in m cm:";
//cin>>r.length.meters>>r.length.centimeters;
//cout<<"Enter "<<r.name<<" width in m cm:";
//cin>>r.width.meters>>r.width.centimeters;
//
////Extra handling "USER FRIENDLY"
//while(r.length.centimeters>=100)
//{
//	r.length.meters++;
//	r.length.centimeters-=100;
//}
//while(r.width.centimeters>=100)
//{
//	r.width.meters++;
//	r.width.centimeters-=100;
//}
////Calculate approximate length and width in meters
//float totalLength = r.length.meters + (float) r.length.centimeters / 100.0;
//float totalWidth = r.width.meters + (float) r.width.centimeters / 100.0;
//r.area=totalLength * totalWidth;
////calculate area and display it..
//cout<<"Area : "<< r.area <<" square meters. "<<endl;
//
//return 0;
//}
//
//
