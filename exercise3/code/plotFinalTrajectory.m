clear all
close all
clc

dataFolder = {'data', filesep};
loadString = ["data_100_0,1_0,01", "data_100_10_0,01"];
legendString = ["100, 0.1, 0.01", "100, 10, 0.01"];

pathFig = ['fig', filesep];

dim = [200, 200, 500, 400];
fontSize = 15;
lineWidth = 2;
% define colors
color = [0, 0.4470, 0.7410;
    0.9, 0.60, 0.4410]; % blue, used for plotting
colorGrey = 0.8*[1, 1, 1]; % grey, used for plotting
colorWhite = [1, 1, 1];


for i = 1:length(loadString)
    loadData = [char(strjoin([dataFolder loadString(i)],'')), '.mat'];
    load(loadData);
    if i == 1
        f1 = plot_enviroment(hl, hu, xinit, dim);
        f2 = plot_velocity(lb, ub, N, dim);
    end
    figure(1);
    h(i) = plot(X(1,:),X(2,:),'color',i/2 * color(i,:) , 'LineWidth',lineWidth);
    
    figure(2);
    subplot(2,1,1); 
    plot(X(3,:)); 
    
    subplot(2,1,2); 
    plot(rad2deg(X(4,:))); 
end

f1;
legend(h, legendString, 'Location','southeast');
set(gca,'fontsize', fontSize);

f2;
legend(h, legendString, 'Location','southeast');
set(gca,'fontsize', fontSize);

saveas(gcf, [pathFig, 'position'], 'jpg');
saveas(gcf, [pathFig, 'position','.eps'], 'epsc');