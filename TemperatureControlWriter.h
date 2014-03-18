/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */


#pragma once


namespace awreflow {


  /**
   * Derivation of the integer number writer for the temperature display
   * on the control page.
   */

  class TemperatureControlWriter : public IntegerNumberWriter {

    protected:
      uint16_t _lastWidth;

    public:
      TemperatureControlWriter();

      void redraw(Panel& panel);
  };
}