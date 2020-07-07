#include <gtest/gtest.h>
#include <string>
#include "FizzBuzz.h"

TEST(FizzBuzzTests, Inputting_1_Returns_1) {
  //Arrange
	int input = 1;
	std::string expected = "1";
  //Act
	std::string actual = fizzbuzz(input);
  //Assert
    EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_2_Returns_2) {
	//Arrange
	int input = 2;
	std::string expected = "2";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_3_Returns_Fizz) {
	//Arrange
	int input = 3;
	std::string expected = "Fizz";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_6_Returns_Fizz) {
	//Arrange
	int input = 6;
	std::string expected = "Fizz";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_5_Returns_Buzz) {
	//Arrange
	int input = 5;
	std::string expected = "Buzz";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_10_Returns_Buzz) {
	//Arrange
	int input = 10;
	std::string expected = "Buzz";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_15_Returns_FizzBuzz) {
	//Arrange
	int input = 15;
	std::string expected = "FizzBuzz";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_7_Returns_Bang) {
	//Arrange
	int input = 7;
	std::string expected = "Bang";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_21_Returns_FizzBang) {
	//Arrange
	int input = 21;
	std::string expected = "FizzBang";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_35_Returns_BuzzBang) {
	//Arrange
	int input = 35;
	std::string expected = "BuzzBang";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}

TEST(FizzBuzzTests, Inputting_105_Returns_FizzBuzzBang) {
	//Arrange
	int input = 105;
	std::string expected = "FizzBuzzBang";
	//Act
	std::string actual = fizzbuzz(input);
	//Assert
	EXPECT_EQ(expected, actual);
}