/* Copyright (C) 2004-2007 Sami Koivu
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
package net.sf.rej.java.instruction;

import java.util.ArrayList;
import java.util.List;

/**
 * Load int from local variable 0.
 * 
 * @author Sami Koivu
 */
public class _iload_0 extends Instruction {

	public static final int OPCODE = 0x1a;

	public static final String MNEMONIC = "iload_0";

	public static final int SIZE = 1;

	public _iload_0() {
	}

	@Override
	public int getOpcode() {
		return OPCODE;
	}

	@Override
	public String getMnemonic() {
		return MNEMONIC;
	}

	@Override
	public int getSize() {
		return SIZE;
	}

	@Override
	public void execute(ExecutionContext ec) {
	}

	@Override
	public byte[] getData(DecompilationContext dc) {
		return new byte[] { OPCODE };
	}

	@Override
	public Parameters getParameterTypes() {
		return Parameters.EMPTY_PARAMS;
	}

	@Override
	public Parameters getParameters() {
		Parameters params = new Parameters(
				new ParameterType[] { ParameterType.TYPE_LOCAL_VARIABLE_READONLY });
		params.addValue(0);
		return params;
	}

	@Override
	public void setData(byte[] data, DecompilationContext dc) {
	}

	@Override
	public void setParameters(Parameters params) {
	}

	@Override
	public List<StackElement> getPushedElements(DecompilationContext dc) {
		List<StackElement> elements = new ArrayList<StackElement>();
		elements.add(new StackElement("value", StackElementType.INT));
		return elements;
	}

}
