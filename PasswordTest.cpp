/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, has_mixed_case)
{
  Password my_password;
  bool actual = my_password.has_mixed_case("Zz");
  ASSERT_EQ(true, actual);  
}

TEST(PasswordTest, repeat_characters)
{
  Password my_password;
  unsigned int actual = my_password.unique_characters("bb");
  ASSERT_EQ(1, actual);
} 

TEST(PasswordTest, same_characters_mixed_case)
{
  Password my_password;
  unsigned int actual = my_password.unique_characters("Bb");
  ASSERT_EQ(2, actual);
} 

TEST(PasswordTest, repeat_characters_mixed_case)
{
  Password my_password;
  unsigned int actual = my_password.unique_characters("Nono");
  ASSERT_EQ(3, actual);
} 
