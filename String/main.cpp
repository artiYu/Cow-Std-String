#include "gtest/gtest.h"
#include "String.h"
#include "CWString.h"
#include "StdString.h"
#include <cstring>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

TEST(FirstTest, Assignments) {
  String *s1 = String::create(String::cow, "s1");
  String *s2 = String::create(String::std_sz);
  s2 = s1;
  s1 = s1;
  s2 = s2;

  String *s3 = String::create(String::std_sz, "s3");
  String *s4 = String::create(String::std_sz, "s4");
  s3 = s1;
  s4 = s3;

  EXPECT_STREQ("s1", *s1);
  EXPECT_STREQ("s1", *s2);
  EXPECT_STREQ("s1", *s3);
  EXPECT_STREQ("s1", *s4);
}

TEST(SecondTest, CheckOfSquareBracketsForStdString) {
  StdString s1 = "Perpetuum mobile";
<<<<<<< HEAD
  int len = strlen (s1);
=======
<<<<<<< HEAD
  int len = strlen (s1);
=======
  int len = strlen(s1);
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  for(int i = 1; i < len; i += 2)
    s1[i] = ' ';
  EXPECT_STREQ("P r e u m m b l ", s1);
}

TEST(ThirdTest, Constructors) {
<<<<<<< HEAD
  StdString s1 = "Perpetuum mobile", s2, s3 (s1);
=======
<<<<<<< HEAD
  StdString s1 = "Perpetuum mobile", s2, s3 (s1);
=======
  StdString s1 = "Perpetuum mobile", s2, s3(s1);
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  CWString s4 = "Perpetuum mobile";
  s2 = s1;
  s1 = s1;
  s4 = s4;
  EXPECT_STREQ("Perpetuum mobile", s1);
  EXPECT_STREQ("Perpetuum mobile", s2);
  EXPECT_STREQ("Perpetuum mobile", s3);
  EXPECT_STREQ("Perpetuum mobile", s4);
}

TEST(ForthTest, CheckOfSquareBracketsForAllString) {
  StdString s1 = "Perpetuum mobile";
  CWString s2 = "Da Vinci";

  int len = strlen(s1);
  for(int i = 1; i < len; i += 2)
    s1[i] = ' ';

  len = strlen(s2);
  for(int i = 1; i < len; i += 2)
    s2[i] = '*';

  EXPECT_STREQ("P r e u m m b l ", s1);
  EXPECT_STREQ("D* *i*c*", s2);
  EXPECT_TRUE(s1[0] == 'P');
  EXPECT_TRUE(s2[0] == 'D');
}

TEST(FifthTest, Arithmetics) {
  StdString s1 = "Perpetuum";
  CWString s2 = "Da Vinci ";

  s1 += " mobile";
  s2 += s1;

  EXPECT_STREQ("Perpetuum mobile", s1);
  EXPECT_STREQ("Da Vinci Perpetuum mobile", s2);
}

TEST(SixthTest, Comparison) {
  String *s1 = String::create(String::std_sz, "Perpetuum");
  String *s2 = String::create(String::cow, "Vinci");
  String *s3 = String::create(String::std_sz, "Perpetuum mobile");
  String *s4 = String::create(String::cow, "Perpetuum");
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======

>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
  EXPECT_FALSE(*s1 == *s3);
  EXPECT_TRUE(*s1 == *s4);
  EXPECT_TRUE(*s2 > *s3);
  EXPECT_FALSE(*s2 < *s4);
  EXPECT_TRUE(*s1 >= *s4);
<<<<<<< HEAD
  EXPECT_FALSE("Da Vinci" <= *s2);
=======
<<<<<<< HEAD
  EXPECT_FALSE("Da Vinci" <= *s2);
=======
  //EXPECT_TRUE("Da Vinci" <= *s2);
>>>>>>> f59196361b53315710c1b096ac2ef4754bca343c
>>>>>>> e64394e60cd5d1f78e5b3c6fe8822145399e5201
}

GTEST_API_ int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
