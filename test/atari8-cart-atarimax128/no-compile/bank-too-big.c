__attribute__((section(".bank0"), used))
volatile unsigned char oversized_bank[0x2001];

int main(void) {
  return oversized_bank[sizeof(oversized_bank) - 1];
}
