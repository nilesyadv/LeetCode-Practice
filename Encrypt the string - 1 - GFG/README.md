# Encrypt the string - 1
## Easy
<div class="problem-statement">
                <p></p><div class="challenge_problem_statement">
<div class="msB challenge_problem_statement_body">
<div class="hackdown-content">
<p><span style="font-size:18px">Bingu was testing all the strings he had at his place&nbsp;and found that most of them were prone to a vicious attack by Banju, his arch-enemy. Bingu decided to encrypt all the strings he had, by the following method. Every substring of identical letters is replaced by a single instance of that letter followed by the number of occurrences of that letter. Then, the string thus obtained is further encrypted by reversing it.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>
</div>
</div>
</div>

<div class="challenge_input_format">
<div class="msB challenge_input_format_title">
<pre><span style="font-size:18px"><strong>Input:</strong>
s = "aabc"
<strong>Output: </strong>1c1b2a
<strong>Explanation: </strong>aabc
Step1: a2b1c1
Step2: 1c1b2a</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s = "aaaaa"
<strong>Output: </strong>5a
<strong>Explanation: </strong>aaaaa
Step 1: a5
Step 2: 5a</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't&nbsp;need to read&nbsp;input or print anything.Your task is to complete the function&nbsp;<strong>encryptString()&nbsp;</strong>which takes a single argument(s) and returns the encrypted string. </span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|s|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|s|).</span></p>
</div>
</div>

<div class="challenge_constraints">
<div class="msB challenge_constraints_title">
<p><span style="font-size:18px"><strong>Constraints</strong><br>
1 &lt;= |s| &lt;=1000</span></p>

<p><span style="font-size:18px">|s| denotes the&nbsp;length of the&nbsp;string s</span></p>
</div>
</div>
 <p></p>
            </div>