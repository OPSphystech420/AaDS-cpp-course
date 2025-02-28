<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">M*. Количество инверсий</h1>
        <table class="limits">
            <tbody>
                <tr class="time-limit">
                    <td class="property-title">Ограничение времени</td>
                    <td>1&nbsp;секунда</td>
                </tr>
                <tr class="memory-limit">
                    <td class="property-title">Ограничение памяти</td>
                    <td>256.0 Мб</td>
                </tr>
                <tr class="input-file">
                    <td class="property-title">Ввод</td>
                    <td colspan="1">стандартный ввод или input.txt</td>
                </tr>
                <tr class="output-file">
                    <td class="property-title">Вывод</td>
                    <td colspan="1">стандартный вывод или output.txt</td>
                </tr>
            </tbody>
        </table>
    </div>
    <h2></h2>
    <div class="legend">
        <div class="Markdown">
            <p class="paragraph">Напишите программу, которая для заданного массива <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-merror"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>A</mi>
                                </mrow>
                                A
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.68333em;vertical-align:0em;" class="strut"></span><span class="mord mathnormal">A</span></span></span></span>=<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-6" class="mjx-math"><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-merror"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mn>1</mn>
                                    </msub>
                                </mrow>
                                a_1
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.58056em;vertical-align:-0.15em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.30110799999999993em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.15em;" class="vlist"><span></span></span></span></span></span></span></span></span></span>, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-11" class="mjx-math"><span id="MJXc-Node-12" class="mjx-mrow"><span id="MJXc-Node-13" class="mjx-merror"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mn>2</mn>
                                    </msub>
                                </mrow>
                                a_2
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.58056em;vertical-align:-0.15em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.30110799999999993em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">2</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.15em;" class="vlist"><span></span></span></span></span></span></span></span></span></span>, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-16" class="mjx-math"><span id="MJXc-Node-17" class="mjx-mrow"><span id="MJXc-Node-18" class="mjx-merror"><span id="MJXc-Node-19" class="mjx-mrow"><span id="MJXc-Node-20" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mo>…</mo>
                                </mrow>
                                \ldots
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.12em;vertical-align:0em;" class="strut"></span><span class="minner">…</span></span></span></span>, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-21" class="mjx-math"><span id="MJXc-Node-22" class="mjx-mrow"><span id="MJXc-Node-23" class="mjx-merror"><span id="MJXc-Node-24" class="mjx-mrow"><span id="MJXc-Node-25" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>n</mi>
                                    </msub>
                                </mrow>
                                a_n
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.58056em;vertical-align:-0.15em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.151392em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight">n</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.15em;" class="vlist"><span></span></span></span></span></span></span></span></span></span> находит количество пар (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-26" class="mjx-math"><span id="MJXc-Node-27" class="mjx-mrow"><span id="MJXc-Node-28" class="mjx-merror"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>i</mi>
                                </mrow>
                                i
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.65952em;vertical-align:0em;" class="strut"></span><span class="mord mathnormal">i</span></span></span></span>,<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-31" class="mjx-math"><span id="MJXc-Node-32" class="mjx-mrow"><span id="MJXc-Node-33" class="mjx-merror"><span id="MJXc-Node-34" class="mjx-mrow"><span id="MJXc-Node-35" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>j</mi>
                                </mrow>
                                j
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.85396em;vertical-align:-0.19444em;" class="strut"></span><span style="margin-right:0.05724em;" class="mord mathnormal">j</span></span></span></span>) таких, что <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-36" class="mjx-math"><span id="MJXc-Node-37" class="mjx-mrow"><span id="MJXc-Node-38" class="mjx-merror"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>i</mi>
                                </mrow>
                                i
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.65952em;vertical-align:0em;" class="strut"></span><span class="mord mathnormal">i</span></span></span></span>
                &lt;<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-41" class="mjx-math"><span id="MJXc-Node-42" class="mjx-mrow"><span id="MJXc-Node-43" class="mjx-merror"><span id="MJXc-Node-44" class="mjx-mrow"><span id="MJXc-Node-45" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>j</mi>
                                </mrow>
                                j
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.85396em;vertical-align:-0.19444em;" class="strut"></span><span style="margin-right:0.05724em;" class="mord mathnormal">j</span></span></span></span> и <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-46" class="mjx-math"><span id="MJXc-Node-47" class="mjx-mrow"><span id="MJXc-Node-48" class="mjx-merror"><span id="MJXc-Node-49" class="mjx-mrow"><span id="MJXc-Node-50" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                                
                            '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                
                                    <mrow>
                                        <msub>
                                            <mi>a</mi>
                                            <mi>i</mi>
                                        </msub>
                                    </mrow>
                                    a_i
                                
                            </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.58056em;vertical-align:-0.15em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.31166399999999994em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.15em;" class="vlist"><span></span></span></span></span></span></span></span></span></span>&gt;<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-51" class="mjx-math"><span id="MJXc-Node-52" class="mjx-mrow"><span id="MJXc-Node-53" class="mjx-merror"><span id="MJXc-Node-54" class="mjx-mrow"><span id="MJXc-Node-55" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                                
                            '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math xmlns="http://www.w3.org/1998/Math/MathML">
                                
                                    <mrow>
                                        <msub>
                                            <mi>a</mi>
                                            <mi>j</mi>
                                        </msub>
                                    </mrow>
                                    a_j
                                
                            </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.716668em;vertical-align:-0.286108em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.311664em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span style="margin-right:0.05724em;" class="mord mathnormal mtight">j</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.286108em;" class="vlist"><span></span></span></span></span></span></span></span></span></span>.
            </p>
        </div>
    </div>
    <h2>Формат ввода</h2>
    <div class="input-specification">
        <div class="Markdown">
            <p class="paragraph">Первая строка входного файла содержит натуральное число <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-56" class="mjx-math"><span id="MJXc-Node-57" class="mjx-mrow"><span id="MJXc-Node-58" class="mjx-merror"><span id="MJXc-Node-59" class="mjx-mrow"><span id="MJXc-Node-60" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mi>n</mi>
                                </mrow>
                                n
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.43056em;vertical-align:0em;" class="strut"></span><span class="mord mathnormal">n</span></span></span></span> (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-61" class="mjx-math"><span id="MJXc-Node-62" class="mjx-mrow"><span id="MJXc-Node-63" class="mjx-merror"><span id="MJXc-Node-64" class="mjx-mrow"><span id="MJXc-Node-65" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mn>1</mn>
                                    <mo>≤</mo>
                                    <mi>n</mi>
                                    <mo>≤</mo>
                                    <mn>100000</mn>
                                </mrow>
                                1 \le n \le 100000
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.78041em;vertical-align:-0.13597em;" class="strut"></span><span class="mord">1</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span><span class="mrel">≤</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span></span><span class="base"><span style="height:0.7719400000000001em;vertical-align:-0.13597em;" class="strut"></span><span class="mord mathnormal">n</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span><span class="mrel">≤</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span></span><span class="base"><span style="height:0.64444em;vertical-align:0em;" class="strut"></span><span class="mord">100000</span></span></span></span>) — количество элементов массива. Вторая строка содержит n элементов массива A (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-66" class="mjx-math"><span id="MJXc-Node-67" class="mjx-mrow"><span id="MJXc-Node-68" class="mjx-merror"><span id="MJXc-Node-69" class="mjx-mrow"><span id="MJXc-Node-70" class="mjx-mtext"><span class="mjx-char" style="padding-bottom: 0.246em;"><span class="mjx-charbox MJXc-font-inherit" style="font-size: 103.1%; width: 2.045em;">Unexpected text node: '
                            
                        '</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            
                                <mrow>
                                    <mn>0</mn>
                                    <mo>≤</mo>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>i</mi>
                                    </msub>
                                    <mo>≤</mo>
                                    <mn>1</mn>
                                    <msup>
                                        <mn>0</mn>
                                        <mn>6</mn>
                                    </msup>
                                </mrow>
                                0 \le a_i \le 10^6
                            
                        </math></script></span><span aria-hidden="true" class="katex-html"><span class="base"><span style="height:0.78041em;vertical-align:-0.13597em;" class="strut"></span><span class="mord">0</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span><span class="mrel">≤</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span></span><span class="base"><span style="height:0.7859700000000001em;vertical-align:-0.15em;" class="strut"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span style="height:0.31166399999999994em;" class="vlist"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span style="height:0.15em;" class="vlist"><span></span></span></span></span></span></span><span style="margin-right:0.2777777777777778em;" class="mspace"></span><span class="mrel">≤</span><span style="margin-right:0.2777777777777778em;" class="mspace"></span></span><span class="base"><span style="height:0.8141079999999999em;vertical-align:0em;" class="strut"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span style="height:0.8141079999999999em;" class="vlist"><span style="top:-3.063em;margin-right:0.05em;"><span style="height:2.7em;" class="pstrut"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">6</span></span></span></span></span></span></span></span></span></span></span>).</p>
        </div>
    </div>
    <h2>Формат вывода</h2>
    <div class="output-specification">
        <div class="Markdown">
            <p class="paragraph">В выходной файл выведите одно число — ответ на задачу.</p>
        </div>
    </div>
    <h2></h2>
    <div>
        <h3 class="sample-tests-header">Пример 1</h3>
        <table class="sample-tests">
            <thead>
                <tr>
                    <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
                    <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>
                        <pre>4
1 2 4 5 
</pre>
                    </td>
                    <td>
                        <pre>0
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
    <div>
        <h3 class="sample-tests-header">Пример 2</h3>
        <table class="sample-tests">
            <thead>
                <tr>
                    <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
                    <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>
                        <pre>4
4 3 1 2
</pre>
                    </td>
                    <td>
                        <pre>5</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
