#include <iostream>
#ifndef _ARUCOTEST_H_
#define _ARUCOTEST_H_

namespace aruco_test{
	class Point3D{
	private:
		float _x, _y, _z;

	public:
		inline Point3D(float _x = 0.0, float _y = 0.0, float _z = 0.0){
			setX(_x);
			setY(_y);
			setZ(_z);
		}

		// inline Point3D(Point3D const &q){
		// 	setX(q.getX());
		// 	setY(q.getY());
		// 	setZ(q.getZ());
		// }

		inline void setX(float v){
			_x = v;
		}

		inline void setY(float v){
			_y = v;
		}

		inline void setZ(float v){
			_z = v;
		}

		inline float getX(){
			return _x;
		}

		inline float getY(){
			return _y;
		}

		inline float getZ(){
			return _z;
		}

		void readPoint3D(float x, float y);
		void obtenerz(float perimeter);
		void convertToPixel();
		void translateCentre();
		float turnAxisZ();
		float turnAxisX();
		float turnAxisY();
	};

	class TypeV{
	private:
		float _x, _y, _z;
	public:
		inline TypeV(float _x=0.0, float _y=0.0, float _z=0.0){
			setX(_x);
			setY(_y);
			setZ(_z);
		}

		// inline TypeV(TypeV const &q){
		// 	setX(q.getX());
		// 	setY(q.getY());
		// 	setZ(q.getZ());
		// }

		inline void setX(float v){
			_x = v;
		}

		inline void setY(float v){
			_y = v;
		}

		inline void setZ(float v){
			_z = v;
		}

		inline float getX(){
			return _x;
		}

		inline float getY(){
			return _y;
		}

		inline float getZ(){
			return _z;
		}

		void readTypeV(float x, float y, float z);

	};

	class TypeF{
	private:
		float _a, _b, _c, _an, _bn, _cn;
	public:
		inline TypeF(int a=0, int b=0, int c=0, int an=0, int bn=0, int cn=0){
			setA(a);
			setB(b);
			setC(c);
			setAn(an);
			setBn(bn);
			setCn(cn);
		}

		// inline TypeF(TypeF const &q){
		// 	setA(q.getA());
		// 	setB(q.getB());
		// 	setC(q.getC());
		// 	setAn(q.getAn());
		// 	setBn(q.getBn());
		// 	setCn(q.getCn());
		// }

		inline void setA(int v){
			_a = v;
		}

		inline void setB(int v){
			_b = v;
		}

		inline void setC(int v){
			_c = v;
		}

		inline void setAn(int v){
			_an = v;
		}

		inline void setBn(int v){
			_bn = v;
		}

		inline void setCn(int v){
			_cn = v;
		}

		inline int getA(){
			return _a;
		}

		inline int getB(){
			return _b;
		}

		inline int getC(){
			return _c;
		}

		inline int getAn(){
			return _an;
		}

		inline int getBn(){
			return _bn;
		}

		inline int getCn(){
			return _cn;
		}

		void readTypeF(int a,int b, int c, int an,int bn, int cn);
	};
}
#endif