import { Button } from '@material-ui/core'
import React from 'react'
import './SearchPage.css'
import SearchResult from './SearchResult'

function SearchPage() {
  return (
    <div className='searchPage'>
        <div className='searchPage__info'> 
        <p> 62 stays | 26 august to 30 august| 2 guests|</p>
        <h1>Stays nearby </h1>
        <Button
        variant='outlined'>Cancellation Flexibilty</Button>
        <Button
        variant='outlined'>Type of place</Button>
        <Button
        variant='outlined'>Price</Button>
        <Button
        variant='outlined'>Rooms and beds</Button>
        <Button
        variant='outlined'>More Filters</Button>

        
        </div>
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total"
        />
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total"
        />
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total" 
        />
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total"
        />
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total"
        />
        <SearchResult 
        img="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
        location="Private room in the center of Montréal."
        title="Stay at this spacious Edwardian House"
        description="1 guest |1 bedroom|1 bed|1.5 shared bathrooms|wifi|Kitchen| Free parking | Washing Machine"
        star={4.73}
        price=" $68 / night"
        total= "$272 total"
        />
    </div>
        
  )
}

export default SearchPage