function v = SCHEME_ControlSimulatorInput()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = casadiMEX(0, 3);
  end
  v = vInitialized;
end
