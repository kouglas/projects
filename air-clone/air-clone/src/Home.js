import React from 'react'
import './Home.css';
import Banner from './Banner'
import Card from './Card'
function Home() {
  return (
    <div className = 'home'>
       
       <Banner />

       <div className='home__section' >  
        <Card 
        src="https://a0.muscache.com/im/pictures/6f093576-946f-41c3-8c99-9af50d39bcd8.jpg?im_w=480"
        title="Online Experiences"
        description="Unique activities we can do together, led by a world of hosts"
        />
        <Card
        src="https://a0.muscache.com/im/pictures/00adf705-3791-40e9-8512-ca5a7d619c11.jpg?im_w=480"
        title="Unique Stays"
        description="Spaces that are more than just a place to sleep."
         />

        <Card 
        src="https://a0.muscache.com/im/pictures/a8ef5d47-0b5a-4189-abaf-322753e942b2.jpg?im_w=480"
        title="Entire Homes"
        description="Comfortable private places, with room for friends or family."
        />
       </div>

       <div className='home__section' >  
        <Card
         src="https://a0.muscache.com/im/pictures/21303889/bf80a075_original.jpg?im_w=480"
         title="Treehouse in east point"
         description="The ATL treehouse with hotub/heated..."
         price="$338/night"
          />
        <Card
         src="https://a0.muscache.com/im/pictures/30c00b46-d66d-4d89-b9ca-3cb2d9d5f461.jpg?im_w=480"
         title="Yurt in Galena "
         description="Forest Garden Yurts"
         price="$109/night"
         />
        <Card
         src="https://a0.muscache.com/im/pictures/0d8f8598-676b-4ab7-9268-af10e10f3afe.jpg?im_w=480"
         title="Treehouse in China Grove"
         description='Cherry Treesort "Big Nick" '
         price="$184/night"
         />
       </div>

    </div>
  )
}

export default Home