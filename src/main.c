#include <stdio.h>
#include <string.h>


void display(void) {
  printf("Hello, world.\n");
  printf("円周率 int: %d\n", 3.14);
  printf("円周率 float: %f\n", 3.14);
  printf("文字 char: %c\n", 'a');
  printf("¥マーク char: %c\n", '\\');

  /* 文字コード -> 文字への変換 */
  printf("8進数文字コード char: %c\n", '\115');
  printf("16進数文字コード char: %c\n", '\x62');

  /* integer */
  printf("8進数 int: %d\n", 010);
  printf("10進数 int: %d\n", 10);
  printf("16進数 int: %d\n", 0x10);
  printf("16進数 で F int: %d\n", 0xF);

  /* string and integer */
  printf("文字: %d, 文字列: %s, 数値: %d\n", 'G', "文字列\\( ˙꒳˙ \\三/ ˙꒳˙)/", 123);

  /* 8進数と16進数 */
  printf("8進数 int: %d\n", 06);
  printf("8進数 int: %d\n", 024);
  printf("8進数 int: %d\n", 015);

  printf("16進数 int: %d\n", 0x6);
  printf("16進数 int: %d\n", 0x14);
  printf("16進数 int: %d\n", 0xD);

  return;
}


void variables() {
  int num;
  float pi = 3.14;
  num = 3;

  printf("%4d %.3f <- 桁数指定あり\n", num, pi);
}


int to_i(float x) {
  int num = x;
  return num;
}


char prompt_str(void) {
  printf("文字を入力して、Enterキーを押してね。\n");

  char character;
  // どちらでも動く
  // scanf("%c", &character);
  character = getchar();
  return character;
}


double prompt_float(void) {
  printf("小数を入力して、Enterキーを押してね。\n");

  double x;
  scanf("%lf", &x);
  return x;
}


void various_operators(void) {
  printf("数を2つ入力してね。\n");
  int num1, num2;
  scanf("%d", &num1);
  scanf("%d", &num2);

  printf("+: %d\n", num1 + num2);
  printf("-: %d\n", num1 - num2);
  printf("*: %d\n", num1 * num2);
  printf("/: %d\n", num1 / num2);
  printf("%: %d\n", num1 % num2);
  printf("&: %d\n", num1 & num2);
  printf("==: %d\n", num1 == num2);
}


void various_sizeof(void) {
  printf("int型: %dバイト\n", sizeof(int));
  printf("double型: %dバイト\n", sizeof(double));
  printf("char型: %dバイト\n", sizeof(char));
  printf("char[12]型: %dバイト\n", sizeof(char[12]));
}


void shift_examples(void) {
  /* コンピュータの得意な2進数に従って計算するので、四則演算より早い */
  printf("5 << 2: %d\n", 5 << 2);
  printf("101 << 2: %d\n", 101 << 2);
  printf("16 >> 2: %d\n", 16 >> 2);
}


void cast(void) {
  int small_num = 3.141529;
  int num = 2;
  printf("(int)3.141529: %.3d\n", (int)small_num);
  printf("(double)2: %f\n", (double)num);
}


void if_else(void) {
  int num1 = 2;
  int num2 = 3;

  if (num1 % 2 == 0) printf("%dは2で割り切れます！\n", num1);

  if (num2 % 2 == 0) {
    printf("ここには到達しません！\n");
  } else {
    printf("%dは2で割り切れません！\n", num2);
  }

  if (num1 != 2) {
    printf("ここには到達しません！\n");
  } else if (num1 == 2 && num2 % 3 == 0 || 3 == 4) {
    printf("STAP細胞はあります！\n");
  } else {
    printf("elseに到達( *¯ ꒳¯*)✨\n");
  }

  int num3 = 0;
  num3 = 1 == 1 ? 1 : 2;
  printf("三項演算子: %d", num3);
}


void switch_statement(void) {
  int num1 = 2;
  int num2 = 3;

  switch (num1) {
    case 2:
      printf("case2\n");
    case 3:
      printf("case3\n");
    default:
      printf("default\n");
      break;
  }
}


void for_loop(void) {
  int num1 = 2;

  for (int i = 0; i < 3; i++) {
    if (i == 1) {
      continue;
    }
    printf("for: loop %5d\n", i + 1);
  }
}


void while_loop(void) {
  int num1 = 0;

  while (num1 < 3) {
    num1++;

    if (num1 == 1) {
      continue;
    }
    printf("while: %d\n", num1);
  }
}


void do_while_loop(void) {
  int num1 = 3;

  do {
    printf("do while: %d\n", num1);
  } while (num1 < 3);
}


#define AR_NUM 5

void array_trial(void) {
  int array[AR_NUM] = {1,5,3,2,4};
  int num_buffer;

  for (int i = 0; i < AR_NUM - 1; i++) {
    for (int j = i + 1; j < AR_NUM; j++) {
      if (array[i] < array[j]) {
        printf("Swap is done ! %d <=> %d\n", array[i], array[j]);
        num_buffer = array[j];
        array[j] = array[i];
        array[i] = num_buffer;
      }
    }
  }

  for (int i = 0; i < AR_NUM; i++) {
    printf("[Num:%d/%d] %d\n", i+1, AR_NUM, array[i]);
  }
  return;
}


void string_array(void) {
  // NOTE: P.203 \0マークを文字列末尾に必ずつける
  char str_two_dim_array[][AR_NUM] = {{'h','e','l','l','\0'}, {'w','o','r','l','\0'}};
  printf("%c\n", str_two_dim_array[0][1]);
  printf(str_two_dim_array[0]);

  char str_array[] = "Salamat !\0";
  printf("%s\n", str_array);
  return;
}


void scanf_str(void) {
  char str[AR_NUM], str2[] = "hello world!";
  printf("文字列を入力してね:");
  scanf("%s", str);  // 文字列をscanfするときは&不要

  printf("入力された文字列：%s\n", str);

  int i;
  for (i = 0; str2[i] != '\0'; i++) {
    printf("%c*", str2[i]);
  }
  printf("\n");
  return;
}


void count_input_size(void) {
  int i;
  char str[10];
  printf("文字を入れてね");
  scanf("%s", str);

  for (i=0; str[i] != '\0'; i++) {
    printf("i++が %d 回実行されました！\n", i+1);
  }
  printf("文字数 %d\n", i);

  return;
}


void struct_sample(void) {
  struct Creature {
    int legs;
    int eyes;
  };  // <- Don't forget!!

  struct Creature cre;
  cre.legs = 8;
  cre.eyes = 1000;

  printf("the creature has %d eyes!\n", cre.eyes);
  return;
}


void type_def_sample(void) {
  typedef struct Creature {
    unsigned int legs : 5;
    int eyes;
    double weight;
  } Creature;  // <- Don't forget!!

  Creature cre1 = {2, 2, 60};
  Creature cre2 = {8, 1000, 0.03};

  // cre2 = {2, 2}; // これはできないみたい
  cre2 = cre1;

  Creature cre[2];
  cre[0].legs = 4; cre[0].eyes = 2; cre[0].weight = 18.3;
  cre[1].legs = 10; cre[1].eyes = 2; cre[1].weight = 0.2;

  printf("the creature has %d eyes!\n", cre2.eyes);
  printf("squid has %d eyes and %d legs!\n", cre[1].eyes, cre[1].legs);
  printf("the size of Creature is %d byte\n", sizeof(Creature));
  return;
}


void union_sample(void) {
  typedef union Doppel {
    char name[20];
    char display[20];
  } Doppel;

  Doppel siruku;
  strcpy(siruku.name, "siruku6\0");
  printf("name: %s\n", siruku.name);
  strcpy(siruku.display, "ghost\0");
  printf("name: %s\n", siruku.name);
  return;
}


void enum_sample(void) {
  typedef enum Week {MON, TUE, WED, THU, FRI, SAT, SUN} Week;
  Week w = SAT;

  if (w == SAT || w == SUN) {
    printf("It is a happy weekend today!\n");
  } else {
    printf("Work like a horse pulling a cart!!\n");
  }

  return;
}


int main(void) {
  // display();
  variables();

  /* intへの丸め */
  int num = to_i(3.141529);
  printf("int型に丸められた 3.14: %d\n", num);
  // char input_string = prompt_str();
  // printf("入力された文字: %c\n", input_string);
  // double input_float = prompt_float();
  // printf("入力された少数: %f\n", input_float);

  // 4. expressions and operators
  // various_operators();
  // various_sizeof();
  shift_examples();
  cast();

  // 5. conditional statement
  // if_else();
  // switch_statement();

  // 6. loop
  // for_loop();
  // while_loop();
  // do_while_loop();

  // 7. 配列
  // array_trial();
  // string_array();  // p.193 Macro
  // scanf_str();  // stringのfor loopもあり
  // count_input_size();

  // 8. 構造体
  // struct_sample();
  // type_def_sample();
  union_sample();
  enum_sample();

  return 0;
}
