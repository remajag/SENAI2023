import logo from '../../imagens/logo.svg'
import styled from 'styled-components'

const LogoContainer = styled.div`
    margin-right: 1px;    
    display: flex;
    font-size: 30px;
    align-itens:center;
    justify-content:flex-end;
    gap:10px;
    p{font-size:25px;}
`

const LogoImage = styled.img`
    
`

function Logo() {
    return (
        <LogoContainer>
            <LogoImage
                src={logo}
                alt='logo' 
            />
            <p><strong>Biblioteca</strong>Virtual</p>
       </LogoContainer>
    )
}

export default Logo