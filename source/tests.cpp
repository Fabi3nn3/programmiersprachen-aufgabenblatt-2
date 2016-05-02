#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("TestDefaultConstructor","[TestDefaultConstructor]"){
	Vec2 v;
	REQUIRE(v.x == 0.0f);
	REQUIRE(v.y == 0.0f);
}

TEST_CASE("TestUserConstructor","[TestUserConstructor]"){
	Vec2 v{4.4,3.2};
	REQUIRE(v.x == 4.4f);
	REQUIRE(v.y == 3.2f);
}

TEST_CASE("TestOp +=", "[TestOp +=]"){
	Vec2 v1{4.4,3.2};
	Vec2 v2{1.3,2.5};
	v1+=v2 ;
	REQUIRE(v1.x == Approx(5.7f));
	REQUIRE(v1.y == Approx(5.7f));
}

TEST_CASE("TestOp -=","[TestOp -=]"){
	Vec2 v1{4.4,3.2};
	Vec2 v2{1.3,2.5};
	v1-=v2;
	REQUIRE(v1.x == Approx(3.1f));
	REQUIRE(v1.y == Approx(0.7f));
}

TEST_CASE("TestOp *=","[TestOp *=]"){
	Vec2 v1{4.4,3.2};
	Vec2 v2{1.3,2.5};
	v1*=1.0f;
	REQUIRE(v1.x == Approx(4.4f));
	REQUIRE(v1.y == Approx(3.2f));
}

TEST_CASE("TestOp /","[TestOp /]"){
	Vec2 v1{4.4,3.2};
	Vec2 v2{1.3,2.5};
	v1 / 2.0f;
	REQUIRE(v1.x == Approx(2.2f));
	REQUIRE(v1.y == Approx(1.6f));
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
