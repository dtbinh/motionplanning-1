function v = OP_ASINH()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = casadiMEX(0, 103);
  end
  v = vInitialized;
end
