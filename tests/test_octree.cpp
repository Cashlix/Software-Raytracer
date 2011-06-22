#include <UnitTest++.h>
		list<Object*> objs;

		Triangle* t = new Triangle(Vector3D(0,0,-10), Vector3D(0,4,-10), Vector3D(10,0,-10));
		Rect *r = new Rect(Vector3D(0,0,10), Vector3D(0,10,10), Vector3D(10,10,10), Vector3D(10,0,0));
		Sphere *s = new Sphere(Vector3D(-20, 10, 0), 4);
		Sphere *s2 = new Sphere(Vector3D(-12, 5, 6), 0.91f);
		Sphere *s3 = new Sphere(Vector3D(-10, 5, 6), 0.91f);
		
		objs.push_back(t);
		objs.push_back(r);
		objs.push_back(s);
		objs.push_back(s2);
		objs.push_back(s3);