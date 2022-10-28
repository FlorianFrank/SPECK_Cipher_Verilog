<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5(127:0)" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8(127:0)" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10(127:0)" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13(127:0)" />
        <signal name="XLXN_14(127:0)" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_20" />
        <signal name="XLXN_21" />
        <signal name="XLXN_22(127:0)" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24(127:0)" />
        <blockdef name="round_encrypt">
            <timestamp>2022-7-7T20:9:33</timestamp>
            <rect width="384" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="512" y1="-224" y2="-224" x1="448" />
            <rect width="64" x="448" y="-140" height="24" />
            <line x2="512" y1="-128" y2="-128" x1="448" />
            <rect width="64" x="448" y="-44" height="24" />
            <line x2="512" y1="-32" y2="-32" x1="448" />
        </blockdef>
        <blockdef name="key_schedule_encrypt">
            <timestamp>2022-7-7T20:9:45</timestamp>
            <rect width="352" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="480" y1="-160" y2="-160" x1="416" />
            <rect width="64" x="416" y="-108" height="24" />
            <line x2="480" y1="-96" y2="-96" x1="416" />
            <rect width="64" x="416" y="-44" height="24" />
            <line x2="480" y1="-32" y2="-32" x1="416" />
        </blockdef>
        <block symbolname="round_encrypt" name="XLXI_1">
            <blockpin signalname="XLXN_16" name="clk" />
            <blockpin signalname="XLXN_1" name="signal_start" />
            <blockpin signalname="XLXN_14(127:0)" name="subkey(63:0)" />
            <blockpin name="plaintext(127:0)" />
            <blockpin signalname="XLXN_2" name="finished" />
            <blockpin signalname="XLXN_5(127:0)" name="ciphertext(127:0)" />
            <blockpin name="state_response(3:0)" />
        </block>
        <block symbolname="round_encrypt" name="XLXI_2">
            <blockpin signalname="XLXN_16" name="clk" />
            <blockpin signalname="XLXN_21" name="signal_start" />
            <blockpin signalname="XLXN_22(127:0)" name="subkey(63:0)" />
            <blockpin signalname="XLXN_5(127:0)" name="plaintext(127:0)" />
            <blockpin name="finished" />
            <blockpin signalname="XLXN_8(127:0)" name="ciphertext(127:0)" />
            <blockpin name="state_response(3:0)" />
        </block>
        <block symbolname="round_encrypt" name="XLXI_3">
            <blockpin signalname="XLXN_16" name="clk" />
            <blockpin name="signal_start" />
            <blockpin name="subkey(63:0)" />
            <blockpin signalname="XLXN_8(127:0)" name="plaintext(127:0)" />
            <blockpin name="finished" />
            <blockpin name="ciphertext(127:0)" />
            <blockpin name="state_response(3:0)" />
        </block>
        <block symbolname="key_schedule_encrypt" name="XLXI_4">
            <blockpin signalname="XLXN_16" name="clk" />
            <blockpin name="signal_start" />
            <blockpin name="key(127:0)" />
            <blockpin signalname="XLXN_1" name="finished" />
            <blockpin signalname="XLXN_14(127:0)" name="outKey(127:0)" />
            <blockpin name="state_response(3:0)" />
        </block>
        <block symbolname="key_schedule_encrypt" name="XLXI_5">
            <blockpin name="clk" />
            <blockpin signalname="XLXN_2" name="signal_start" />
            <blockpin signalname="XLXN_14(127:0)" name="key(127:0)" />
            <blockpin signalname="XLXN_21" name="finished" />
            <blockpin signalname="XLXN_22(127:0)" name="outKey(127:0)" />
            <blockpin name="state_response(3:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1520" y="720" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1520" y="1152" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1504" y="1536" name="XLXI_3" orien="R0">
        </instance>
        <instance x="736" y="1168" name="XLXI_5" orien="R0">
        </instance>
        <instance x="656" y="640" name="XLXI_4" orien="R0">
        </instance>
        <branch name="XLXN_1">
            <wire x2="1328" y1="480" y2="480" x1="1136" />
            <wire x2="1328" y1="480" y2="560" x1="1328" />
            <wire x2="1520" y1="560" y2="560" x1="1328" />
        </branch>
        <branch name="XLXN_2">
            <wire x2="2160" y1="880" y2="880" x1="704" />
            <wire x2="704" y1="880" y2="1072" x1="704" />
            <wire x2="736" y1="1072" y2="1072" x1="704" />
            <wire x2="2224" y1="496" y2="496" x1="2032" />
            <wire x2="2224" y1="496" y2="576" x1="2224" />
            <wire x2="2224" y1="576" y2="768" x1="2224" />
            <wire x2="2160" y1="768" y2="880" x1="2160" />
            <wire x2="2224" y1="768" y2="768" x1="2160" />
        </branch>
        <branch name="XLXN_5(127:0)">
            <wire x2="1360" y1="1072" y2="1120" x1="1360" />
            <wire x2="1520" y1="1120" y2="1120" x1="1360" />
            <wire x2="1408" y1="1072" y2="1072" x1="1360" />
            <wire x2="1408" y1="768" y2="1072" x1="1408" />
            <wire x2="2144" y1="768" y2="768" x1="1408" />
            <wire x2="2144" y1="768" y2="784" x1="2144" />
            <wire x2="2128" y1="592" y2="592" x1="2032" />
            <wire x2="2128" y1="592" y2="784" x1="2128" />
            <wire x2="2144" y1="784" y2="784" x1="2128" />
        </branch>
        <branch name="XLXN_8(127:0)">
            <wire x2="2128" y1="1248" y2="1248" x1="1408" />
            <wire x2="2144" y1="1248" y2="1248" x1="2128" />
            <wire x2="1408" y1="1248" y2="1520" x1="1408" />
            <wire x2="1424" y1="1520" y2="1520" x1="1408" />
            <wire x2="1504" y1="1504" y2="1504" x1="1424" />
            <wire x2="1424" y1="1504" y2="1520" x1="1424" />
            <wire x2="2144" y1="1024" y2="1024" x1="2032" />
            <wire x2="2144" y1="1024" y2="1056" x1="2144" />
            <wire x2="2144" y1="1056" y2="1248" x1="2144" />
        </branch>
        <branch name="XLXN_14(127:0)">
            <wire x2="1152" y1="832" y2="832" x1="624" />
            <wire x2="624" y1="832" y2="1168" x1="624" />
            <wire x2="640" y1="1168" y2="1168" x1="624" />
            <wire x2="736" y1="1136" y2="1136" x1="640" />
            <wire x2="640" y1="1136" y2="1168" x1="640" />
            <wire x2="1216" y1="544" y2="544" x1="1136" />
            <wire x2="1280" y1="544" y2="544" x1="1216" />
            <wire x2="1296" y1="544" y2="544" x1="1280" />
            <wire x2="1296" y1="544" y2="624" x1="1296" />
            <wire x2="1520" y1="624" y2="624" x1="1296" />
            <wire x2="1216" y1="544" y2="800" x1="1216" />
            <wire x2="1216" y1="800" y2="800" x1="1152" />
            <wire x2="1152" y1="800" y2="832" x1="1152" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="1504" y1="336" y2="336" x1="640" />
            <wire x2="1504" y1="336" y2="496" x1="1504" />
            <wire x2="1520" y1="496" y2="496" x1="1504" />
            <wire x2="640" y1="336" y2="352" x1="640" />
            <wire x2="640" y1="352" y2="480" x1="640" />
            <wire x2="656" y1="480" y2="480" x1="640" />
            <wire x2="1344" y1="912" y2="912" x1="1328" />
            <wire x2="1344" y1="912" y2="928" x1="1344" />
            <wire x2="1520" y1="928" y2="928" x1="1344" />
            <wire x2="1328" y1="912" y2="1280" x1="1328" />
            <wire x2="1344" y1="1280" y2="1280" x1="1328" />
            <wire x2="1344" y1="1280" y2="1312" x1="1344" />
            <wire x2="1504" y1="1312" y2="1312" x1="1344" />
            <wire x2="1360" y1="464" y2="464" x1="1344" />
            <wire x2="1360" y1="464" y2="496" x1="1360" />
            <wire x2="1504" y1="496" y2="496" x1="1360" />
            <wire x2="1344" y1="464" y2="912" x1="1344" />
        </branch>
        <branch name="XLXN_21">
            <wire x2="1360" y1="1008" y2="1008" x1="1216" />
            <wire x2="1360" y1="992" y2="1008" x1="1360" />
            <wire x2="1520" y1="992" y2="992" x1="1360" />
        </branch>
        <branch name="XLXN_22(127:0)">
            <wire x2="1344" y1="1072" y2="1072" x1="1216" />
            <wire x2="1344" y1="1056" y2="1072" x1="1344" />
            <wire x2="1520" y1="1056" y2="1056" x1="1344" />
        </branch>
    </sheet>
</drawing>