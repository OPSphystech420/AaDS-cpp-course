<div class="problem-statement">
   <div class="header">
      <h1 class="title">V. Эчпочмак</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"> Из трех отрезков можно составить треугольник, если длина каждого из них не превосходит суммы длин двух других (да, вырожденный
      треугольник в этой задаче считается треугольником). <!--l. 49-->
      <p style="text-indent: 0em;">Дан набор из <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script>
      отрезков. Необходимо выбрать подмножество отрезков с наибольшей суммарной длиной, в котором любые три отрезка могут образовать
      треугольник. <!--l. 51-->
      </p><p style="text-indent: 0em;"><span style="font-weight: bold;">Наблюдение из курса логики: </span><span style="font-style:
      italic;">«Любое утверждение об элементах пустого</span> <span style="font-style: italic;">множества — истинно»</span></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> Вводится число <!--l. 57--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-4" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-5" class="mjx-mrow"><span id="MJXc-Node-6" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script>
      (<!--l. 57--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-7" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-8" class="mjx-mrow"><span id="MJXc-Node-9" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span><span id="MJXc-Node-10" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.491em;">≤</span></span><span id="MJXc-Node-11" class="mjx-mi MJXc-space3"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span><span id="MJXc-Node-12" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.491em;">≤</span></span><span id="MJXc-Node-13" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">3</span></span><span id="MJXc-Node-14" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-15" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-16" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-17" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>N</mi> <mo>≤</mo> <mn>3</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn></math></script>). В следующих <!--l. 57--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-18" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-19" class="mjx-mrow"><span id="MJXc-Node-20" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.085em;">N</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></script> строках записаны целые числа <!--l.
      57--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-21" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-22" class="mjx-mrow"><span id="MJXc-Node-23" class="mjx-msub"><span class="mjx-base"><span id="MJXc-Node-24" class="mjx-mrow"><span id="MJXc-Node-25" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em;">L</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-26" class="mjx-mrow" style=""><span id="MJXc-Node-27" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.43em; padding-bottom: 0.308em;">i</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>L</mi></mrow><mrow><mi>i</mi></mrow></msub></math></script>
      (<!--l. 57--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-28" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-31" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.491em;">≤</span></span><span id="MJXc-Node-32" class="mjx-msub MJXc-space3"><span class="mjx-base"><span id="MJXc-Node-33" class="mjx-mrow"><span id="MJXc-Node-34" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em;">L</span></span></span></span><span class="mjx-sub" style="font-size: 70.7%; vertical-align: -0.212em; padding-right: 0.071em;"><span id="MJXc-Node-35" class="mjx-mrow" style=""><span id="MJXc-Node-36" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.43em; padding-bottom: 0.308em;">i</span></span></span></span></span><span id="MJXc-Node-37" class="mjx-mo MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.491em;">≤</span></span><span id="MJXc-Node-38" class="mjx-mn MJXc-space3"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">6</span></span><span id="MJXc-Node-39" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-40" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-41" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span><span id="MJXc-Node-42" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
      <msub><mrow><mi>L</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>6</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn></math></script>),
      задающие длины отрезков. 
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Выведите размер найденного множества и суммарную длину отрезков в нем </div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>4
1
5
3
3
</pre></td>
            <td><pre>3 11
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy input"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy input"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Copy output"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Copy output"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>5
100
20
20
20
20
</pre></td>
            <td><pre>2 120
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
