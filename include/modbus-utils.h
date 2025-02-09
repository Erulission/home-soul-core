#define HOLD_OFFSET(field) ((uint16_t)(offsetof(holding_reg_params_t, field) + 1))
#define INPUT_OFFSET(field) ((uint16_t)(offsetof(input_reg_params_t, field) + 1))
#define COIL_OFFSET(field) ((uint16_t)(offsetof(coil_reg_params_t, field) + 1))
#define DISCRETE_OFFSET(field) ((uint16_t)(offsetof(discrete_reg_params_t, field) + 1))

#define HOLD_REG_START(field) (HOLD_OFFSET(field) >> 1)
#define HOLD_REG_SIZE(field) (sizeof(((holding_reg_params_t *)0)->field) >> 1)