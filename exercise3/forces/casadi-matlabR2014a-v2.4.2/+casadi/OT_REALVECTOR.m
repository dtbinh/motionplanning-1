function v = OT_REALVECTOR()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = casadiMEX(0, 54);
  end
  v = vInitialized;
end
