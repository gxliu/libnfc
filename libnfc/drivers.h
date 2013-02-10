/*-
 * Public platform independent Near Field Communication (NFC) library
 *
 * Copyright (C) 2009 Roel Verdult
 * Copyright (C) 2011 Romain Tartière
 * Copyright (C) 2011 Romuald Conty
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

/**
 * @file drivers.h
 * @brief Supported drivers header
 */

#ifndef __NFC_DRIVERS_H__
#  define __NFC_DRIVERS_H__

#  include <nfc/nfc-types.h>

extern const struct nfc_driver_list* nfc_drivers;
#  if defined (DRIVER_PN53X_AVR_SPI_ENABLED)
#    include "drivers/pn53x_avr_spi.h"
#  endif /* DRIVER_PN53X_AVR_SPI_ENABLED */


#endif // __NFC_DRIVERS_H__
