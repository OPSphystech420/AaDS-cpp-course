<div class="problem-statement problem-statement_type_markdown">
    <div class="header">
        <h1 class="title">P*. Слияние. Шаблоны</h1>
        <table class="limits">
            <tbody>
                <tr class="time-limit">
                    <td class="property-title">Ограничение времени</td>
                    <td>1&nbsp;секунда</td>
                </tr>
                <tr class="memory-limit">
                    <td class="property-title">Ограничение памяти</td>
                    <td>66.9 Мб</td>
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
            <p class="paragraph">Реализуйте шаблонную функцию <em>Merge</em>, которая принимает две отсортированные последовательности и сливает их одну большую отсортированную.</p>
            <p class="paragraph">Функция должна принимать 5 аргументов: <em>first_begin</em>, <em>first_end</em> - указатели на начало и конец первой последовательности; <em>second_begin</em>, <em>second_end</em> - начало и конец второй последовательности; <em>out</em> - указатель на начало итоговой последовательности (куда записывать ответ).</p>
            <p class="paragraph">Последовательности <em>first</em>, <em>second</em> и <em>out</em> могут хранить значения разных типов!</p>
            <p class="paragraph"><strong>Пример:</strong></p>
            <p class="paragraph"><em>int16_t first[2]{1, 4};</em></p>
            <p class="paragraph"><em>int32_t second[3]{2, 3, 5};</em></p>
            <p class="paragraph"><em>int64_t out[5];</em></p>
            <p class="paragraph"><em>Merge(first, first + 2, second, second + 3, out);</em> // out = {1, 2, 3, 4, 5}</p>
            <hr>
            <p class="paragraph">Ваш код будет проверяться на скрытых от вас юнит-тестах, проверяющих корректность шаблонной реализации. Требование к реализации: из операций сравнения можно использовать только операцию "&lt;".&lt; /p&gt;
                    </p><p class="paragraph">Пришлите на проверку заголовочный файл, содержащий ТОЛЬКО определение шаблона. Он будет включен в cpp файл с тестами автоматически (main писать не нужно!).</p>
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
1 4 6
4
2 3 5 7
</pre>
                    </td>
                    <td>
                        <pre>1 2 3 4 5 6 7 
</pre>
                    </td>
                </tr>
            </tbody>
        </table>
    </div>
</div>
