const express = require("express");
const router = express.Router();
const path = require("path");
const axios = require("axios");

router.get("/category", (req, res) => {
  console.log(req.query)
  let resp;
  const fetch = async () => {
    try {
      resp = await axios.get(
        `http://api.mediastack.com/v1/news?access_key=b31ad94cf08cfb67bcdd203fbe383762&categories=${req.query.cat}&countries=${req.query.country}&languages=en`
      );
      res.status(200).json({totalResutls:resp.data.pagination.total, articles: resp.data.data });
    } catch (error) {
      console.log(error);
    }
  };
  fetch();
  // return res.status(400).json("not found")
});
router.get("/search", (req, res) => {
  let resp;
  const fetch = async () => {
    try {
      resp = await axios.get(
        `http://api.mediastack.com/v1/news?access_key=b31ad94cf08cfb67bcdd203fbe383762&keywords=${req.query.search}&languages=en`
      );
      res.status(200).json({ articles: resp.data.data });
    } catch (error) {
      console.log(error);
    }
  };
  fetch();
  // return res.status(400).json("not found")
});

module.exports = router;
