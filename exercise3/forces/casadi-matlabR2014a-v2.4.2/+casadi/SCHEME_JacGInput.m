function v = SCHEME_JacGInput()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = casadiMEX(0, 27);
  end
  v = vInitialized;
end
