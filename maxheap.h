#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <iostream>
#include <vector>

/*!
 * \brief The MaxHeap class
 */
class MaxHeap
{
public:
    /*!
     * \brief MaxHeap
     */
    MaxHeap();

    ~MaxHeap();

    /*!
     * \brief realToVirtual
     * \param realPosition
     * \return
     */
    int realToVirtual(int realPosition);
    /*!
     * \brief virtualToReal
     * \param virtualPosition
     * \return
     */
    int virtualToReal(int virtualPosition);
    /*!
     * \brief leftChildRealPos
     * \param realPosition
     * \return
     */
    int leftChildRealPos(int realPosition);
    /*!
     * \brief rightChildRealPos
     * \param realPosition
     * \return
     */
    int rightChildRealPos(int realPosition);
    /*!
     * \brief getFatherRealPosition
     * \param realPosition
     * \return
     */
    int getFatherRealPosition(int realPosition);
    /*!
     * \brief upsideCheckAndMove
     * \param realPos
     */
    void upsideCheckAndMove(int realPos);
    /*!
     * \brief insertInterface
     * \param number
     */
    void insertInterface(int number);
    /*!
     * \brief gitDotFileMode1
     * \return
     */
    const std::string gitDotFileMode1();
    /*!
     * \brief removeTheHighestNumber
     * \return
     */
    int removeTheHighestNumber();

    /*!
     * \brief getNumberOfElementsInTheVector
     * \return
     */
    int getNumberOfElementsInTheVector();

    /*!
     * \brief getHeapAsAVector
     * \return
     */
    std::vector<int> getHeapAsAVector();
private:
    //The zero position cannot be used
    std::vector<int> numbers;

    /*!
     * \brief insert
     * \param number
     * \return The position where the number was inserted
     */
    int insert(int number);
};

#endif // MAXHEAP_H
