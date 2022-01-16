import React from 'react';
import PropTypes from 'prop-types';
import styles from './Button.module.css';

const Button = ({label}) => {
  return (
    <button className={styles.btn}>{label}</button>
  );
};

Button.propTypes = {
  label: PropTypes.string.isRequired,
};

export default Button;
