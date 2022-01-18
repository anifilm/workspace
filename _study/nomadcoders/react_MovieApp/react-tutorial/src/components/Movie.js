import React from 'react';
import { Link } from 'react-router-dom';
import PropTypes from 'prop-types';

const Movie = ({ id, coverImg, title, summary, genres, genresIds }) => {
  return (
    <div>
      <img src={coverImg} alt={title} />
      <h2><Link to={`/movie/${id}`}>{title}</Link></h2>
      <p>{summary}</p>
      <ul>
        {genresIds.map((ids) => (
          <li key={ids}>{genres.map((gen) => gen.id === ids && gen.name)}</li>
        ))}
      </ul>
    </div>
  );
};

Movie.propTypes = {
  id: PropTypes.number.isRequired,
  coverImg: PropTypes.string.isRequired,
  title: PropTypes.string.isRequired,
  summary: PropTypes.string.isRequired,
  genres: PropTypes.arrayOf(PropTypes.object).isRequired,
  genresIds: PropTypes.arrayOf(PropTypes.number).isRequired,
};

export default Movie;
