#include <2_LabSevenMatrices.hpp>
#include <catch.hpp>

SCENARIO("DefaultConstructorTest") {
	Matrix<int> mat;
	REQUIRE(mat.Lines == 2);
	REQUIRE(mat.Columns == 2);
}

SCENARIO("ConstructorTest") {
	Matrix<int> mat(3, 3);
	REQUIRE(mat.Lines == mat.Columns);
}
SCENARIO("AddTest") {
	Matrix<int> Matr1(2, 2);
	Matr1.matr[0][0] = 0;
	Matr1.matr[0][1] = 8;
	Matr1.matr[1][0] = 2;
	Matr1.matr[1][1] = 3;

	Matrix<int> Matr2(2, 2);
	Matr2.matr[0][0] = 5;
	Matr2.matr[0][1] = 4;
	Matr2.matr[1][0] = 1;
	Matr2.matr[1][1] = 2;

	Matrix<int> res_matr(2, 2);
	res_matr.matr[0][0] = 5;
	res_matr.matr[0][1] = 12;
	res_matr.matr[1][0] = 3;
	res_matr.matr[1][1] = 5;

	REQUIRE((Matr1 + Matr2) == res_matr);
}

SCENARIO("MultiTest") {
	Matrix<int> Matr1(2, 2);
	Matr1.matr[0][0] = 0;
	Matr1.matr[0][1] = 4;
	Matr1.matr[1][0] = 2;
	Matr1.matr[1][1] = 3;

	Matrix<int> Matr2(2, 2);
	Matr2.matr[0][0] = 3;
	Matr2.matr[0][1] = 4;
	Matr2.matr[1][0] = 1;
	Matr2.matr[1][1] = 2;

	Matrix<int> res_matr(2, 2);
	res_matr.matr[0][0] = 4;
	res_matr.matr[0][1] = 8;
	res_matr.matr[1][0] = 9;
	res_matr.matr[1][1] = 14;

	REQUIRE((Matr1*Matr2) == res_matr);
}
