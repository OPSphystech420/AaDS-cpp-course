<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">AA. Матрица</h1>
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
            <p class="paragraph">Дан набор натуральных чисел: <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-1" class="mjx-math"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-semantics"><span id="MJXc-Node-4" class="mjx-mrow"><span id="MJXc-Node-5" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-7" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mn>1</mn>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_1</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.30110799999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>, …, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-8" class="mjx-math"><span id="MJXc-Node-9" class="mjx-mrow"><span id="MJXc-Node-10" class="mjx-semantics"><span id="MJXc-Node-11" class="mjx-mrow"><span id="MJXc-Node-12" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-13" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-14" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>N</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.32833099999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight" style="margin-right:0.10903em;">N</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>. По этому набору строится таблица чисел размером N x N по следующему правилу: в клетку i-го столбца j-й строки записывается большее из чисел <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-15" class="mjx-math"><span id="MJXc-Node-16" class="mjx-mrow"><span id="MJXc-Node-17" class="mjx-semantics"><span id="MJXc-Node-18" class="mjx-mrow"><span id="MJXc-Node-19" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-20" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-21" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>i</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_i</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.31166399999999994em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span> и <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-22" class="mjx-math"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-semantics"><span id="MJXc-Node-25" class="mjx-mrow"><span id="MJXc-Node-26" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-27" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-28" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.49em;">j</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>j</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_j</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.716668em;vertical-align:-0.286108em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.311664em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight" style="margin-right:0.05724em;">j</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.286108em;"><span></span></span></span></span></span></span></span></span></span> при <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-29" class="mjx-math"><span id="MJXc-Node-30" class="mjx-mrow"><span id="MJXc-Node-31" class="mjx-semantics"><span id="MJXc-Node-32" class="mjx-mrow"><span id="MJXc-Node-33" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span><span id="MJXc-Node-34" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.429em; padding-bottom: 0.551em;">≠</span></span><span id="MJXc-Node-35" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.49em;">j</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>i</mi>
                                    <mo mathvariant="normal">≠</mo>
                                    <mi>j</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">i ≠ j</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8888799999999999em;vertical-align:-0.19444em;"></span><span class="mord mathnormal">i</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel"><span class="mrel"><span class="mord vbox"><span class="thinbox"><span class="rlap"><span class="strut" style="height:0.8888799999999999em;vertical-align:-0.19444em;"></span><span class="inner"><span class="mord"><span class="mrel"></span></span></span><span class="fix"></span></span></span></span></span><span class="mrel">=</span></span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.85396em;vertical-align:-0.19444em;"></span><span class="mord mathnormal" style="margin-right:0.05724em;">j</span></span></span></span> (если <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-36" class="mjx-math"><span id="MJXc-Node-37" class="mjx-mrow"><span id="MJXc-Node-38" class="mjx-semantics"><span id="MJXc-Node-39" class="mjx-mrow"><span id="MJXc-Node-40" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-41" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-42" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.307em;">i</span></span></span></span><span id="MJXc-Node-43" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.064em; padding-bottom: 0.307em;">=</span></span><span id="MJXc-Node-44" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-45" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-46" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.429em; padding-bottom: 0.49em;">j</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>i</mi>
                                    </msub>
                                    <mo>=</mo>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>j</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_i = a_j</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.31166399999999994em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">=</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.716668em;vertical-align:-0.286108em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.311664em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight" style="margin-right:0.05724em;">j</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.286108em;"><span></span></span></span></span></span></span></span></span></span>, то записывается это число); на пересечении i-го столбца и i-й строки записывается число 0.</p>
            <p class="paragraph">Дана таблица чисел. Требуется определить, могла ли она быть построена по данным правилам из какого-либо набора чисел <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-47" class="mjx-math"><span id="MJXc-Node-48" class="mjx-mrow"><span id="MJXc-Node-49" class="mjx-semantics"><span id="MJXc-Node-50" class="mjx-mrow"><span id="MJXc-Node-51" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-52" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-53" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mn>1</mn>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_1</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.30110799999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>, …, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-54" class="mjx-math"><span id="MJXc-Node-55" class="mjx-mrow"><span id="MJXc-Node-56" class="mjx-semantics"><span id="MJXc-Node-57" class="mjx-mrow"><span id="MJXc-Node-58" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-59" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-60" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>N</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.32833099999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight" style="margin-right:0.10903em;">N</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>.</p>
        </div>
    </div>
    <h2>Формат ввода</h2>
    <div class="input-specification">
        <div class="Markdown">
            <p class="paragraph">В первой строке входных данных задается натуральное число <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-61" class="mjx-math"><span id="MJXc-Node-62" class="mjx-mrow"><span id="MJXc-Node-63" class="mjx-semantics"><span id="MJXc-Node-64" class="mjx-mrow"><span id="MJXc-Node-65" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>N</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.68333em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span> -- размер таблицы (<span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-66" class="mjx-math"><span id="MJXc-Node-67" class="mjx-mrow"><span id="MJXc-Node-68" class="mjx-semantics"><span id="MJXc-Node-69" class="mjx-mrow"><span id="MJXc-Node-70" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span><span id="MJXc-Node-71" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-72" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-73" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.49em;">≤</span></span><span id="MJXc-Node-74" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">500</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mn>1</mn>
                                    <mo>≤</mo>
                                    <mi>N</mi>
                                    <mo>≤</mo>
                                    <mn>500</mn>
                                </mrow>
                                <annotation encoding="application/x-tex">1 \le N \le 500</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.78041em;vertical-align:-0.13597em;"></span><span class="mord">1</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.8193em;vertical-align:-0.13597em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.64444em;vertical-align:0em;"></span><span class="mord">500</span></span></span></span>). В следующих <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-75" class="mjx-math"><span id="MJXc-Node-76" class="mjx-mrow"><span id="MJXc-Node-77" class="mjx-semantics"><span id="MJXc-Node-78" class="mjx-mrow"><span id="MJXc-Node-79" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>N</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.68333em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span> строках содержится по <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-12-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-80" class="mjx-math"><span id="MJXc-Node-81" class="mjx-mrow"><span id="MJXc-Node-82" class="mjx-semantics"><span id="MJXc-Node-83" class="mjx-mrow"><span id="MJXc-Node-84" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-12"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <mi>N</mi>
                                </mrow>
                                <annotation encoding="application/x-tex">N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.68333em;vertical-align:0em;"></span><span class="mord mathnormal" style="margin-right:0.10903em;">N</span></span></span></span> чисел -- числа соответствующей строки из таблицы (все числа целые неотрицательные и не превосходят 1 000).</p>
        </div>
    </div>
    <h2>Формат вывода</h2>
    <div class="output-specification">
        <div class="Markdown">
            <p class="paragraph">В одну строку выведите через пробел числа <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-13-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-85" class="mjx-math"><span id="MJXc-Node-86" class="mjx-mrow"><span id="MJXc-Node-87" class="mjx-semantics"><span id="MJXc-Node-88" class="mjx-mrow"><span id="MJXc-Node-89" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-90" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-91" class="mjx-mn" style=""><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.368em; padding-bottom: 0.368em;">1</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-13"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mn>1</mn>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_1</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.30110799999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">1</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>, …, <span class="katex"><span class="katex-mathml"><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-14-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 97%;"><span id="MJXc-Node-92" class="mjx-math"><span id="MJXc-Node-93" class="mjx-mrow"><span id="MJXc-Node-94" class="mjx-semantics"><span id="MJXc-Node-95" class="mjx-mrow"><span id="MJXc-Node-96" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-97" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.246em; padding-bottom: 0.307em;">a</span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-98" class="mjx-mi" style=""><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.49em; padding-bottom: 0.307em; padding-right: 0.085em;">N</span></span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-14"><math xmlns="http://www.w3.org/1998/Math/MathML">
                            <semantics>
                                <mrow>
                                    <msub>
                                        <mi>a</mi>
                                        <mi>N</mi>
                                    </msub>
                                </mrow>
                                <annotation encoding="application/x-tex">a_N</annotation>
                            </semantics>
                        </math></script></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.58056em;vertical-align:-0.15em;"></span><span class="mord"><span class="mord mathnormal">a</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height:0.32833099999999993em;"><span style="top:-2.5500000000000003em;margin-left:0em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathnormal mtight" style="margin-right:0.10903em;">N</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height:0.15em;"><span></span></span></span></span></span></span></span></span></span>. Если решений несколько, выведите любое из них. Если набора, удовлетворяющего данной таблице, не существует, выведите одно число "-1".</p>
        </div>
    </div>
    <h2>Пример</h2>
    <div>
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
                        <pre>3
0 4 6
4 0 6
6 6 0
</pre>
                    </td>
                    <td>
                        <pre>4 4 6 
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
