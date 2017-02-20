program test
  integer,dimension(3,5) ::b
  integer i,j
  do i= 1,3
     do j = 1,5
        b(j,i)=(i-1)*5+j-1
     end do
  end do
  write(*,'(6i4)') b(1,:)
end program test
