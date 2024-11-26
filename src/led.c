
#ifdef PROBE_USB_CONNECTED_LED
    gpio_init(PROBE_USB_CONNECTED_LED);
    gpio_set_dir(PROBE_USB_CONNECTED_LED, GPIO_OUT);
#endif
#ifdef PROBE_DAP_CONNECTED_LED
    gpio_init(PROBE_DAP_CONNECTED_LED);
    gpio_set_dir(PROBE_DAP_CONNECTED_LED, GPIO_OUT);
#endif
#ifdef PROBE_DAP_RUNNING_LED
    gpio_init(PROBE_DAP_RUNNING_LED);
    gpio_set_dir(PROBE_DAP_RUNNING_LED, GPIO_OUT);
#endif
#ifdef PROBE_UART_RX_LED
    gpio_init(PROBE_UART_RX_LED);
    gpio_set_dir(PROBE_UART_RX_LED, GPIO_OUT);
#endif
#ifdef PROBE_UART_TX_LED
    gpio_init(PROBE_UART_TX_LED);
    gpio_set_dir(PROBE_UART_TX_LED, GPIO_OUT);
#endif
