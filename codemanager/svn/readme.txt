ÔÚÃüÁîÐÐÖ´ÐÐ svn log -r {2016-04-01}:{2016-11-01} --xml -v > /home/zhuying/loc/source/svn/beemonitor/svn.log


java -jar statsvn.jar /home/zhuying/loc/source/svn/beemonitor/svn.log /home/zhuying/loc/source/svn/beemonitor -disable-twitter-button -output-dir /home/zhuying/loc/out/summary/svn/beemonitor -exclude "src/main/webapp/assets/**;src/main/webapp/guide/**;src/main/webapp/book/**;src/main/java/com/yunos/cloudtest/dal/domain/**;src/main/java/com/yunos/cloudtest/dal/mapper/**;src/main/resources/com/yunos/cloudtest/dal/mapper/**;"