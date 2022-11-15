const axios = require("axios");

export const getNews = (req, res) => {
  let resp;
  const fetch = async () => {
    try {
      resp = await axios.get(
        `http://api.mediastack.com/v1/news?access_key=b31ad94cf08cfb67bcdd203fbe383762&categories=${req.query.cat}`
      );
      res.status(200).json({ articles: resp.data.data });
    } catch (error) {
      console.log(error);
    }
  };
  fetch();
  // return res.status(400).json("not found")
};
