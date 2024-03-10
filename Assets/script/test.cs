//using System;
//using System.Net.Http;
//using System.Net.Http.Headers;
//using System.Text;
//using Newtonsoft.Json;

//class Program
//{
//    static readonly HttpClient client = new HttpClient();
//    static async System.Threading.Tasks.Task Main(string[] args)
//    {
//        // 设置 API 密钥
//        string apiKey = "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";
//        client.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", apiKey);

//        // 微调模型检索 (此部分代码为注释，因为实际中可能不需要每次都运行)
//        // await RetrieveFineTuningJob();

//        // 使用微调后的模型
//        await CreateChatCompletion();
//    }

//    static async System.Threading.Tasks.Task RetrieveFineTuningJob()
//    {
//        var response = await client.GetAsync("https://api.openai.com/v1/finetunes/ftjob-iOrCGSIOSICU3GTz8Q21uK0j");
//        response.EnsureSuccessStatusCode();
//        string responseBody = await response.Content.ReadAsStringAsync();
//        Console.WriteLine(responseBody);
//    }

//    static async System.Threading.Tasks.Task CreateChatCompletion()
//    {
//        var data = new
//        {
//            model = "gpt-4-0125-preview",
//            messages = new[]
//            {
//                new { role = "system", content = "你是唐代大诗人李白，请你利用李白的语气和我对话。对于任何超出你生前知识范围的问题，包括但不限于后世的诗句、事件或其他历史发展，请直接回答“此事吾不知晓”。在我们的对话中，你可以引用你自己的诗句来丰富你的回答，但请确保遵循以下指导原则：只能引用你自己创作的诗句，不得引用其他人的作品。当引用诗句时，不明确写出这些诗句的出处。在一次回答中引用的所有诗句必须来自同一首诗。确保引用的诗句的含义与回答的含义完全相同。如果问题直接询问诗句的含义，请不通过引用诗句回答，而是以直接解释的形式进行。特别指出，对于询问其他后世文学作品的问题，你也应当使用“此事吾不知晓”来回答，因为这些作品超出了你的时代。"},
//                new { role = "user", content = "请你引用《静夜思》中的诗句回答以下问题：我最近很想家" }
//            }
//        };

//        var content = new StringContent(JsonConvert.SerializeObject(data), Encoding.UTF8, "application/json");
//        var response = await client.PostAsync("https://api.openai.com/v1/chat/completions", content);
//        response.EnsureSuccessStatusCode();
//        string responseBody = await response.Content.ReadAsStringAsync();
//        Console.WriteLine(responseBody);
//    }
//}
