#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Força a habilitação de USE_SCRIPT
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

// Opcional: Aumenta o buffer de scripts
#ifdef USE_SCRIPT
  #undef USE_SCRIPT_FATFS
  #define USE_SCRIPT_FATFS 14  // Tamanho em KB
#endif

#endif  // _USER_CONFIG_OVERRIDE_H_
