/**
 * @file test_functions.c
 * @author DK15@rk22
 * @brief Test Functions
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "feature.h"
#include <math.h>

void main(void);
void save_game(void);
void load_game(void);
void tutorial(void);
void firstscr(void);
void main_game(void);
void layout(void);
void drawviperandladder(void);
void dice(void);
void position(void);
void viperandladder(void);
void locate(int,int);
void draw();
void eofgame(char,int);
void password(char);
void playfilesync(char);

void setUp(){}
/**
 * @brief Required by the unity test framework
 * 
 */
void tearDown(){}

/**
 * @brief Start of the application test
 * 
 * @return int 
 */
int main()
{
  UNITY_BEGIN();

/**
 * @brief Run Test functions
 * 
 */
  RUN_TEST(test_main);
  RUN_TEST(test_save_game);
  RUN_TEST(test_load_game);
  RUN_TEST(test_tutorial);
  RUN_TEST(test_firstscr);
  RUN_TEST(test_main_game);
  RUN_TEST(test_layout);
  RUN_TEST(test_drawviperandladder);
  RUN_TEST(test_dice);
  RUN_TEST(test_position);
  RUN_TEST(test_viperandladder);
  RUN_TEST(test_locate);
  RUN_TEST(test_draw);
  RUN_TEST(test_eofgame);
  RUN_TEST(test_password);
  RUN_TEST(test_playfilesync);

  /**
   * @brief Close the Unity Test Framework
   * 
   * @return return 
   */
  return UNITY_END();
}

/**
 * @brief Test Functions
 * 
 */
void test_main(void) {
  TEST_ASSERT_EQUAL(0, main(p1, p2));
}

void test_save_game(void) {
  TEST_ASSERT_EQUAL(2, save_game(54, 64));
}

void test_load_game(void) {
  TEST_ASSERT_EQUAL(1, load_game(68, 34));
}

void test_tutorial(void) {
  TEST_ASSERT_EQUAL(2, tutorial(100, 23, 58));
}

void test_snakes(void) {
  TEST_ASSERT_EQUAL(1, snakes(95, 2, 1));
}

void test_ladders(void) {
  TEST_ASSERT_EQUAL(2, ladders(94, 2, 35));
}

void test_eofgame(void) {
  TEST_ASSERT_EQUAL(3, eofgame("Incorrect choice.Try Again"));
}

void test_eofgame(void) {
  TEST_ASSERT_EQUAL(4, eofgame("Incorrect choice.Try Again"));
}
