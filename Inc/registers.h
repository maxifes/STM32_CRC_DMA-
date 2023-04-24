#define BIT_0 0x1
#define BIT_1 0x1<<1
#define BIT_2 0x1<<2
#define BIT_3 0x1<<3
#define BIT_4 0x1<<4
#define BIT_5 0x1<<5
#define BIT_6 0x1<<6
#define BIT_7 0x1<<7
#define BIT_8 0x1<<8
#define BIT_9 0x1<<9
#define BIT_10 0x1<<10
#define BIT_11 0x1<<11
#define BIT_12 0x1<<12
#define BIT_13 0x1<<13
#define BIT_14 0x1<<14
#define BIT_15 0x1<<15
#define BIT_16 0x1<<16
#define BIT_17 0x1<<17
#define BIT_18 0x1<<18
#define BIT_19 0x1<<19
#define BIT_20 0x1<<20
#define BIT_21 0x1<<21
#define BIT_22 0x1<<22
#define BIT_23 0x1<<23
#define BIT_24 0x1<<24
#define BIT_25 0x1<<25
#define BIT_26 0x1<<26
#define BIT_27 0x1<<27
#define BIT_28 0x1<<28
#define BIT_29 0x1<<29
#define BIT_30 0x1<<30
#define BIT_31 0x1<<31

//RCC Registers
#define RCC_BASE 0x40023800
#define RCC_AHB1ENR (*((volatile uint32_t *)(RCC_BASE|0x30))) //PortD Bit 3, DMA bit 22, CRC bit 12
#define RCC_AHB2ENR (*((volatile uint32_t *)(RCC_BASE|0x34))) //HASH Byte 5

//DMA registers
#define DMA2_BASE 0x40026400
#define DMA_LISR (*((volatile uint32_t *)(DMA2_BASE|0x00)))
#define DMA_HISR (*((volatile uint32_t *)(DMA2_BASE|0x04)))
#define DMA_LIFCR (*((volatile uint32_t *)(DMA2_BASE|0x08)))
#define DMA_HIFCR (*((volatile uint32_t *)(DMA2_BASE|0x0C)))
#define DMA2_S0CR (*((volatile uint32_t *)(DMA2_BASE|0x10))) //Registro de configuracion
#define DMA2_S0PAR (*((volatile uint32_t *)(DMA2_BASE|0x18))) //Direccion de inicio
#define DMA2_S0M0AR (*((volatile uint32_t *)(DMA2_BASE|0x1C))) //Direccion destino
#define DMA2_S0NDTR (*((volatile uint32_t *)(DMA2_BASE|0x14))) //Número de datos a ser transferidos
#define DMA2_S0FCR (*((volatile uint32_t *)(DMA2_BASE|0x24))) //Número de datos a ser transferidos

//HASH registers
#define HASH_BASE 0x50060400
#define HASH_CR (*((volatile uint32_t *)(HASH_BASE+0x00)))
#define HASH_DIN (*((volatile uint32_t *)(HASH_BASE+0x04)))
#define HASH_STR (*((volatile uint32_t *)(HASH_BASE+0x08)))
#define HASH_HR0 (*((volatile uint32_t *)(HASH_BASE+0x0C)))
#define HASH_HR1 (*((volatile uint32_t *)(HASH_BASE+0x10)))
#define HASH_HR2 (*((volatile uint32_t *)(HASH_BASE+0x14)))
#define HASH_HR3 (*((volatile uint32_t *)(HASH_BASE+0x18)))
#define HASH_IMR (*((volatile uint32_t *)(HASH_BASE+0x20)))
#define HASH_SR (*((volatile uint32_t *)(HASH_BASE+0x24)))

#define CRC_BASE 0x40023000
#define CRC_DR (*((volatile uint32_t *)(CRC_BASE+0x00)))
#define CRC_IDR (*((volatile uint32_t *)(CRC_BASE+0x04)))
#define CRC_CR (*((volatile uint32_t *)(CRC_BASE+0x08)))

//GPIOD registers
#define GPIOD_BASE 0x40020C00
#define GPIOD_MODER (*((volatile uint32_t *)(GPIOD_BASE+0x00)))
#define GPIOD_OTYPER (*((volatile uint32_t *)(GPIOD_BASE+0x04)))
#define GPIOD_OSPEEDR (*((volatile uint32_t *)(GPIOD_BASE+0x08)))
#define GPIOD_PUPDR (*((volatile uint32_t *)(GPIOD_BASE+0x0C)))
#define GPIOD_IDR (*((volatile uint32_t *)(GPIOD_BASE+0x10)))
#define GPIOD_ODR (*((volatile uint32_t *)(GPIOD_BASE+0x14)))
#define GPIOD_BSRR (*((volatile uint32_t *)(GPIOD_BASE+0x18)))
#define GPIOD_LCKR (*((volatile uint32_t *)(GPIOD_BASE+0x1C)))
#define GPIOD_AFRL (*((volatile uint32_t *)(GPIOD_BASE+0x20)))
#define GPIOD_AFRH (*((volatile uint32_t *)(GPIOD_BASE+0x24)))

#define DMA_SOURCE_ADDRESS 0x08000000
#define DMA_DESTINATION_ADDRESS 0x08000618
