#define LED_PIN 2
#define BUTTON_PIN 4
#define BUZZER_PIN 5
#define ANALOG_PIN 34
#define BAUD_RATE 115200
#define BLINK_MS 250
#define DEBOUNCE_MS 35
#define SAMPLE_COUNT 8
#define ADC_MAX 4095
#define VREF_MV 3300
#define TONE_HZ 880
#define TONE_MS 60
#define PWM_STEP 5
#define PWM_MAX 255
#define MAGIC_NUMBER 0xBEEF
#define SQUARE(x) ((x) * (x))
#define CLAMP(v, lo, hi) ((v) < (lo) ? (lo) : ((v) > (hi) ? (hi) : (v)))
#define ADC_TO_MV(raw) (((uint32_t)(raw) * VREF_MV) / ADC_MAX)
#define ARRAY_LEN(a) (sizeof(a) / sizeof((a)[0]))
#define BIT_SET(reg, b) ((reg) |= (1UL << (b)))
#define BIT_CLR(reg, b) ((reg) &= ~(1UL << (b)))

void setup() {
}

void loop() {
}