function pangrams(s) {
    // Write your code here
   return Array.from(
        new Set(
          s.replace(/\s/g, "")
            .split("")
            .map(c => c.toLowerCase())
        )
      ).length === 26
        ? "pangram"
        : "not pangram"
}