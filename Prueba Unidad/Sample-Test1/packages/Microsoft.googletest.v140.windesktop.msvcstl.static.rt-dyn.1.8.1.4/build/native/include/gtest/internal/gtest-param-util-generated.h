#ifndef TESTING_INTERNAL_GTEST-PARAM-UTIL-GENERATED_H
#define TESTING_INTERNAL_GTEST-PARAM-UTIL-GENERATED_H


#include "gtest-param-util.h"
#include "gtest-linked_ptr.h"

namespace testing {

namespace internal {

// Used in the Values() function to provide polymorphic capabilities.
template<typename T1>
class ValueArray1 {
  public:
    inline explicit ValueArray1(T1 v1) : v1_(v1) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_)};
        return ValuesIn(array);
      };

    inline ValueArray1(const ValueArray1<T1> & other) : v1_(other.v1_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray1<T1> & other);

    const T1 v1_;

};
template<typename T1, typename T2>
class ValueArray2 {
  public:
    inline ValueArray2(T1 v1, T2 v2) : v1_(v1), v2_(v2) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_)};
        return ValuesIn(array);
      };

    inline ValueArray2(const ValueArray2<T1, T2> & other) : v1_(other.v1_), v2_(other.v2_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray2<T1, T2> & other);

    const T1 v1_;

    const T2 v2_;

};
template<typename T1, typename T2, typename T3>
class ValueArray3 {
  public:
    inline ValueArray3(T1 v1, T2 v2, T3 v3) : v1_(v1), v2_(v2), v3_(v3) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_)};
        return ValuesIn(array);
      };

    inline ValueArray3(const ValueArray3<T1, T2, T3> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray3<T1, T2, T3> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

};
template<typename T1, typename T2, typename T3, typename T4>
class ValueArray4 {
  public:
    inline ValueArray4(T1 v1, T2 v2, T3 v3, T4 v4) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_)};
        return ValuesIn(array);
      };

    inline ValueArray4(const ValueArray4<T1, T2, T3, T4> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray4<T1, T2, T3, T4> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5>
class ValueArray5 {
  public:
    inline ValueArray5(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_)};
        return ValuesIn(array);
      };

    inline ValueArray5(const ValueArray5<T1, T2, T3, T4, T5> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray5<T1, T2, T3, T4, T5> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class ValueArray6 {
  public:
    inline ValueArray6(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_)};
        return ValuesIn(array);
      };

    inline ValueArray6(const ValueArray6<T1, T2, T3, T4, T5, T6> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray6<T1, T2, T3, T4, T5, T6> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
class ValueArray7 {
  public:
    inline ValueArray7(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_)};
        return ValuesIn(array);
      };

    inline ValueArray7(const ValueArray7<T1, T2, T3, T4, T5, T6, T7> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray7<T1, T2, T3, T4, T5, T6, T7> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
class ValueArray8 {
  public:
    inline ValueArray8(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_)};
        return ValuesIn(array);
      };

    inline ValueArray8(const ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
class ValueArray9 {
  public:
    inline ValueArray9(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_)};
        return ValuesIn(array);
      };

    inline ValueArray9(const ValueArray9<T1, T2, T3, T4, T5, T6, T7, T8, T9> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray9<T1, T2, T3, T4, T5, T6, T7, T8, T9> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
class ValueArray10 {
  public:
    inline ValueArray10(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_)};
        return ValuesIn(array);
      };

    inline ValueArray10(const ValueArray10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
class ValueArray11 {
  public:
    inline ValueArray11(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
          v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_)};
        return ValuesIn(array);
      };

    inline ValueArray11(const ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
class ValueArray12 {
  public:
    inline ValueArray12(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
          v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_)};
        return ValuesIn(array);
      };

    inline ValueArray12(const ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
class ValueArray13 {
  public:
    inline ValueArray13(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
          v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
          v12_(v12), v13_(v13) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_)};
        return ValuesIn(array);
      };

    inline ValueArray13(const ValueArray13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
class ValueArray14 {
  public:
    inline ValueArray14(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_)};
        return ValuesIn(array);
      };

    inline ValueArray14(const ValueArray14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
class ValueArray15 {
  public:
    inline ValueArray15(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_)};
        return ValuesIn(array);
      };

    inline ValueArray15(const ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
class ValueArray16 {
  public:
    inline ValueArray16(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
          v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
          v16_(v16) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_)};
        return ValuesIn(array);
      };

    inline ValueArray16(const ValueArray16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray16<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
class ValueArray17 {
  public:
    inline ValueArray17(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_)};
        return ValuesIn(array);
      };

    inline ValueArray17(const ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray17<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
class ValueArray18 {
  public:
    inline ValueArray18(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_)};
        return ValuesIn(array);
      };

    inline ValueArray18(const ValueArray18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray18<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
class ValueArray19 {
  public:
    inline ValueArray19(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
          v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13),
          v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_)};
        return ValuesIn(array);
      };

    inline ValueArray19(const ValueArray19<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray19<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
class ValueArray20 {
  public:
    inline ValueArray20(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
          v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12),
          v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18),
          v19_(v19), v20_(v20) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_)};
        return ValuesIn(array);
      };

    inline ValueArray20(const ValueArray20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray20<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
class ValueArray21 {
  public:
    inline ValueArray21(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
          v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
          v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
          v18_(v18), v19_(v19), v20_(v20), v21_(v21) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_)};
        return ValuesIn(array);
      };

    inline ValueArray21(const ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
class ValueArray22 {
  public:
    inline ValueArray22(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_)};
        return ValuesIn(array);
      };

    inline ValueArray22(const ValueArray22<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray22<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
class ValueArray23 {
  public:
    inline ValueArray23(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_)};
        return ValuesIn(array);
      };

    inline ValueArray23(const ValueArray23<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray23<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
class ValueArray24 {
  public:
    inline ValueArray24(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
          v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
          v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
          v22_(v22), v23_(v23), v24_(v24) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_)};
        return ValuesIn(array);
      };

    inline ValueArray24(const ValueArray24<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray24<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
class ValueArray25 {
  public:
    inline ValueArray25(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_)};
        return ValuesIn(array);
      };

    inline ValueArray25(const ValueArray25<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray25<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
class ValueArray26 {
  public:
    inline ValueArray26(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_)};
        return ValuesIn(array);
      };

    inline ValueArray26(const ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
class ValueArray27 {
  public:
    inline ValueArray27(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
          v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13),
          v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19),
          v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25),
          v26_(v26), v27_(v27) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_)};
        return ValuesIn(array);
      };

    inline ValueArray27(const ValueArray27<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray27<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
class ValueArray28 {
  public:
    inline ValueArray28(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
          v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12),
          v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18),
          v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24),
          v25_(v25), v26_(v26), v27_(v27), v28_(v28) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_)};
        return ValuesIn(array);
      };

    inline ValueArray28(const ValueArray28<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray28<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
class ValueArray29 {
  public:
    inline ValueArray29(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
          v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
          v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
          v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23),
          v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_)};
        return ValuesIn(array);
      };

    inline ValueArray29(const ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
class ValueArray30 {
  public:
    inline ValueArray30(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_)};
        return ValuesIn(array);
      };

    inline ValueArray30(const ValueArray30<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray30<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
class ValueArray31 {
  public:
    inline ValueArray31(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30), v31_(v31) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_)};
        return ValuesIn(array);
      };

    inline ValueArray31(const ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray31<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
class ValueArray32 {
  public:
    inline ValueArray32(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
          v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
          v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
          v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27),
          v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_)};
        return ValuesIn(array);
      };

    inline ValueArray32(const ValueArray32<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray32<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33>
class ValueArray33 {
  public:
    inline ValueArray33(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_)};
        return ValuesIn(array);
      };

    inline ValueArray33(const ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
class ValueArray34 {
  public:
    inline ValueArray34(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33), v34_(v34) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_)};
        return ValuesIn(array);
      };

    inline ValueArray34(const ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35>
class ValueArray35 {
  public:
    inline ValueArray35(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
          v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13),
          v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19),
          v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25),
          v26_(v26), v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31),
          v32_(v32), v33_(v33), v34_(v34), v35_(v35) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_)};
        return ValuesIn(array);
      };

    inline ValueArray35(const ValueArray35<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray35<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36>
class ValueArray36 {
  public:
    inline ValueArray36(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
          v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12),
          v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18),
          v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24),
          v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29), v30_(v30),
          v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35), v36_(v36) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_)};
        return ValuesIn(array);
      };

    inline ValueArray36(const ValueArray36<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray36<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37>
class ValueArray37 {
  public:
    inline ValueArray37(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
          v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
          v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
          v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23),
          v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29),
          v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35),
          v36_(v36), v37_(v37) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_)};
        return ValuesIn(array);
      };

    inline ValueArray37(const ValueArray37<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray37<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
class ValueArray38 {
  public:
    inline ValueArray38(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
          v35_(v35), v36_(v36), v37_(v37), v38_(v38) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_)};
        return ValuesIn(array);
      };

    inline ValueArray38(const ValueArray38<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray38<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39>
class ValueArray39 {
  public:
    inline ValueArray39(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
          v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_)};
        return ValuesIn(array);
      };

    inline ValueArray39(const ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray39<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40>
class ValueArray40 {
  public:
    inline ValueArray40(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
          v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
          v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
          v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27),
          v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33),
          v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39),
          v40_(v40) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_)};
        return ValuesIn(array);
      };

    inline ValueArray40(const ValueArray40<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray40<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41>
class ValueArray41 {
  public:
    inline ValueArray41(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
          v39_(v39), v40_(v40), v41_(v41) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_)};
        return ValuesIn(array);
      };

    inline ValueArray41(const ValueArray41<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray41<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42>
class ValueArray42 {
  public:
    inline ValueArray42(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
          v39_(v39), v40_(v40), v41_(v41), v42_(v42) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_)};
        return ValuesIn(array);
      };

    inline ValueArray42(const ValueArray42<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray42<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43>
class ValueArray43 {
  public:
    inline ValueArray43(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6),
          v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13),
          v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19),
          v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25),
          v26_(v26), v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31),
          v32_(v32), v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37),
          v38_(v38), v39_(v39), v40_(v40), v41_(v41), v42_(v42), v43_(v43) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_)};
        return ValuesIn(array);
      };

    inline ValueArray43(const ValueArray43<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray43<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44>
class ValueArray44 {
  public:
    inline ValueArray44(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5),
          v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12),
          v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17), v18_(v18),
          v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23), v24_(v24),
          v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29), v30_(v30),
          v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35), v36_(v36),
          v37_(v37), v38_(v38), v39_(v39), v40_(v40), v41_(v41), v42_(v42),
          v43_(v43), v44_(v44) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_)};
        return ValuesIn(array);
      };

    inline ValueArray44(const ValueArray44<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray44<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45>
class ValueArray45 {
  public:
    inline ValueArray45(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
          v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
          v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16), v17_(v17),
          v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22), v23_(v23),
          v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28), v29_(v29),
          v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34), v35_(v35),
          v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40), v41_(v41),
          v42_(v42), v43_(v43), v44_(v44), v45_(v45) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_)};
        return ValuesIn(array);
      };

    inline ValueArray45(const ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46>
class ValueArray46 {
  public:
    inline ValueArray46(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46) : v1_(v1), v2_(v2), v3_(v3),
          v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
          v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40),
          v41_(v41), v42_(v42), v43_(v43), v44_(v44), v45_(v45), v46_(v46) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_), static_cast<T>(v46_)};
        return ValuesIn(array);
      };

    inline ValueArray46(const ValueArray46<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_), v46_(other.v46_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray46<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

    const T46 v46_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47>
class ValueArray47 {
  public:
    inline ValueArray47(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47) : v1_(v1), v2_(v2),
          v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
          v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
          v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
          v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
          v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33), v34_(v34),
          v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39), v40_(v40),
          v41_(v41), v42_(v42), v43_(v43), v44_(v44), v45_(v45), v46_(v46),
          v47_(v47) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_), static_cast<T>(v46_), static_cast<T>(v47_)};
        return ValuesIn(array);
      };

    inline ValueArray47(const ValueArray47<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_), v46_(other.v46_),
          v47_(other.v47_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray47<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

    const T46 v46_;

    const T47 v47_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48>
class ValueArray48 {
  public:
    inline ValueArray48(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47, T48 v48) : v1_(v1),
          v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
          v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
          v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
          v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27),
          v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33),
          v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39),
          v40_(v40), v41_(v41), v42_(v42), v43_(v43), v44_(v44), v45_(v45),
          v46_(v46), v47_(v47), v48_(v48) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_), static_cast<T>(v46_), static_cast<T>(v47_),
            static_cast<T>(v48_)};
        return ValuesIn(array);
      };

    inline ValueArray48(const ValueArray48<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_), v46_(other.v46_),
          v47_(other.v47_), v48_(other.v48_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray48<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

    const T46 v46_;

    const T47 v47_;

    const T48 v48_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49>
class ValueArray49 {
  public:
    inline ValueArray49(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47, T48 v48, T49 v49) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
          v39_(v39), v40_(v40), v41_(v41), v42_(v42), v43_(v43), v44_(v44),
          v45_(v45), v46_(v46), v47_(v47), v48_(v48), v49_(v49) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_), static_cast<T>(v46_), static_cast<T>(v47_),
            static_cast<T>(v48_), static_cast<T>(v49_)};
        return ValuesIn(array);
      };

    inline ValueArray49(const ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48, T49> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_), v46_(other.v46_),
          v47_(other.v47_), v48_(other.v48_), v49_(other.v49_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48, T49> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

    const T46 v46_;

    const T47 v47_;

    const T48 v48_;

    const T49 v49_;

};
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50>
class ValueArray50 {
  public:
    inline ValueArray50(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46, T47 v47, T48 v48, T49 v49, T50 v50) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
          v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
          v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
          v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26),
          v27_(v27), v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32),
          v33_(v33), v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38),
          v39_(v39), v40_(v40), v41_(v41), v42_(v42), v43_(v43), v44_(v44),
          v45_(v45), v46_(v46), v47_(v47), v48_(v48), v49_(v49), v50_(v50) {};

    template<typename T>
    inline operator ParamGenerator<T>() const {
        const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
            static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
            static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
            static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
            static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
            static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
            static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
            static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
            static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
            static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
            static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
            static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
            static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
            static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
            static_cast<T>(v42_), static_cast<T>(v43_), static_cast<T>(v44_),
            static_cast<T>(v45_), static_cast<T>(v46_), static_cast<T>(v47_),
            static_cast<T>(v48_), static_cast<T>(v49_), static_cast<T>(v50_)};
        return ValuesIn(array);
      };

    inline ValueArray50(const ValueArray50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48, T49, T50> & other) : v1_(other.v1_), v2_(other.v2_),
          v3_(other.v3_), v4_(other.v4_), v5_(other.v5_), v6_(other.v6_),
          v7_(other.v7_), v8_(other.v8_), v9_(other.v9_), v10_(other.v10_),
          v11_(other.v11_), v12_(other.v12_), v13_(other.v13_), v14_(other.v14_),
          v15_(other.v15_), v16_(other.v16_), v17_(other.v17_), v18_(other.v18_),
          v19_(other.v19_), v20_(other.v20_), v21_(other.v21_), v22_(other.v22_),
          v23_(other.v23_), v24_(other.v24_), v25_(other.v25_), v26_(other.v26_),
          v27_(other.v27_), v28_(other.v28_), v29_(other.v29_), v30_(other.v30_),
          v31_(other.v31_), v32_(other.v32_), v33_(other.v33_), v34_(other.v34_),
          v35_(other.v35_), v36_(other.v36_), v37_(other.v37_), v38_(other.v38_),
          v39_(other.v39_), v40_(other.v40_), v41_(other.v41_), v42_(other.v42_),
          v43_(other.v43_), v44_(other.v44_), v45_(other.v45_), v46_(other.v46_),
          v47_(other.v47_), v48_(other.v48_), v49_(other.v49_), v50_(other.v50_) {};


  private:
    // No implementation - assignment is unsupported.
    void operator =(const ValueArray50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43, T44, T45, T46, T47, T48, T49, T50> & other);

    const T1 v1_;

    const T2 v2_;

    const T3 v3_;

    const T4 v4_;

    const T5 v5_;

    const T6 v6_;

    const T7 v7_;

    const T8 v8_;

    const T9 v9_;

    const T10 v10_;

    const T11 v11_;

    const T12 v12_;

    const T13 v13_;

    const T14 v14_;

    const T15 v15_;

    const T16 v16_;

    const T17 v17_;

    const T18 v18_;

    const T19 v19_;

    const T20 v20_;

    const T21 v21_;

    const T22 v22_;

    const T23 v23_;

    const T24 v24_;

    const T25 v25_;

    const T26 v26_;

    const T27 v27_;

    const T28 v28_;

    const T29 v29_;

    const T30 v30_;

    const T31 v31_;

    const T32 v32_;

    const T33 v33_;

    const T34 v34_;

    const T35 v35_;

    const T36 v36_;

    const T37 v37_;

    const T38 v38_;

    const T39 v39_;

    const T40 v40_;

    const T41 v41_;

    const T42 v42_;

    const T43 v43_;

    const T44 v44_;

    const T45 v45_;

    const T46 v46_;

    const T47 v47_;

    const T48 v48_;

    const T49 v49_;

    const T50 v50_;

};
// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Generates values from the Cartesian product of values produced
// by the argument generators.
//
template<typename T1, typename T2>
class CartesianProductGenerator2 : public ParamGeneratorInterface<::testing::tuple<T1, T2> > {
  public:
    typedef ::testing::tuple<T1, T2> ParamType;

    inline CartesianProductGenerator2(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2) : g1_(g1), g2_(g2) {};

    inline virtual ~CartesianProductGenerator2() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current2_;
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator2::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator2<T1, T2> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

};
// class CartesianProductGenerator2
template<typename T1, typename T2, typename T3>
class CartesianProductGenerator3 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3> > {
  public:
    typedef ::testing::tuple<T1, T2, T3> ParamType;

    inline CartesianProductGenerator3(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3) : g1_(g1), g2_(g2), g3_(g3) {};

    inline virtual ~CartesianProductGenerator3() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current3_;
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator3::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator3<T1, T2, T3> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

};
// class CartesianProductGenerator3
template<typename T1, typename T2, typename T3, typename T4>
class CartesianProductGenerator4 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4> ParamType;

    inline CartesianProductGenerator4(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4) : g1_(g1), g2_(g2), g3_(g3), g4_(g4) {};

    inline virtual ~CartesianProductGenerator4() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current4_;
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator4::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator4<T1, T2, T3, T4> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

};
// class CartesianProductGenerator4
template<typename T1, typename T2, typename T3, typename T4, typename T5>
class CartesianProductGenerator5 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5> ParamType;

    inline CartesianProductGenerator5(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5) {};

    inline virtual ~CartesianProductGenerator5() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current5_;
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator5::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator5<T1, T2, T3, T4, T5> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

};
// class CartesianProductGenerator5
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class CartesianProductGenerator6 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5,
        T6> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5, T6> ParamType;

    inline CartesianProductGenerator6(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5, const ParamGenerator<T6> & g6) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {};

    inline virtual ~CartesianProductGenerator6() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin(), g6_, g6_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end(), g6_, g6_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5, const ParamGenerator<T6> & g6, const typename ParamGenerator::iterator & current6) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
                  begin6_(g6.begin()), end6_(g6.end()), current6_(current6)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current6_;
              if (current6_ == end6_) {
                current6_ = begin6_;
                ++current5_;
              }
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_ &&
                  current6_ == typed_other->current6_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_),
                begin6_(other.begin6_),
                end6_(other.end6_),
                current6_(other.current6_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_, *current6_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_ ||
                  current6_ == end6_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        const typename ParamGenerator::iterator begin6_;

        const typename ParamGenerator::iterator end6_;

        typename ParamGenerator::iterator current6_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator6::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator6<T1, T2, T3, T4, T5, T6> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

    const ParamGenerator<T6> g6_;

};
// class CartesianProductGenerator6
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
class CartesianProductGenerator7 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5, T6,
        T7> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5, T6, T7> ParamType;

    inline CartesianProductGenerator7(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5, const ParamGenerator<T6> & g6, const ParamGenerator<T7> & g7) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7) {};

    inline virtual ~CartesianProductGenerator7() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin(), g6_, g6_.begin(), g7_,
            g7_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end(), g6_, g6_.end(), g7_, g7_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5, const ParamGenerator<T6> & g6, const typename ParamGenerator::iterator & current6, const ParamGenerator<T7> & g7, const typename ParamGenerator::iterator & current7) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
                  begin6_(g6.begin()), end6_(g6.end()), current6_(current6),
                  begin7_(g7.begin()), end7_(g7.end()), current7_(current7)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current7_;
              if (current7_ == end7_) {
                current7_ = begin7_;
                ++current6_;
              }
              if (current6_ == end6_) {
                current6_ = begin6_;
                ++current5_;
              }
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_ &&
                  current6_ == typed_other->current6_ &&
                  current7_ == typed_other->current7_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_),
                begin6_(other.begin6_),
                end6_(other.end6_),
                current6_(other.current6_),
                begin7_(other.begin7_),
                end7_(other.end7_),
                current7_(other.current7_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_, *current6_, *current7_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_ ||
                  current6_ == end6_ ||
                  current7_ == end7_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        const typename ParamGenerator::iterator begin6_;

        const typename ParamGenerator::iterator end6_;

        typename ParamGenerator::iterator current6_;

        const typename ParamGenerator::iterator begin7_;

        const typename ParamGenerator::iterator end7_;

        typename ParamGenerator::iterator current7_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator7::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator7<T1, T2, T3, T4, T5, T6, T7> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

    const ParamGenerator<T6> g6_;

    const ParamGenerator<T7> g7_;

};
// class CartesianProductGenerator7
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
class CartesianProductGenerator8 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8> ParamType;

    inline CartesianProductGenerator8(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5, const ParamGenerator<T6> & g6, const ParamGenerator<T7> & g7, const ParamGenerator<T8> & g8) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7),
              g8_(g8) {};

    inline virtual ~CartesianProductGenerator8() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin(), g6_, g6_.begin(), g7_,
            g7_.begin(), g8_, g8_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end(), g6_, g6_.end(), g7_, g7_.end(), g8_,
            g8_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5, const ParamGenerator<T6> & g6, const typename ParamGenerator::iterator & current6, const ParamGenerator<T7> & g7, const typename ParamGenerator::iterator & current7, const ParamGenerator<T8> & g8, const typename ParamGenerator::iterator & current8) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
                  begin6_(g6.begin()), end6_(g6.end()), current6_(current6),
                  begin7_(g7.begin()), end7_(g7.end()), current7_(current7),
                  begin8_(g8.begin()), end8_(g8.end()), current8_(current8)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current8_;
              if (current8_ == end8_) {
                current8_ = begin8_;
                ++current7_;
              }
              if (current7_ == end7_) {
                current7_ = begin7_;
                ++current6_;
              }
              if (current6_ == end6_) {
                current6_ = begin6_;
                ++current5_;
              }
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_ &&
                  current6_ == typed_other->current6_ &&
                  current7_ == typed_other->current7_ &&
                  current8_ == typed_other->current8_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_),
                begin6_(other.begin6_),
                end6_(other.end6_),
                current6_(other.current6_),
                begin7_(other.begin7_),
                end7_(other.end7_),
                current7_(other.current7_),
                begin8_(other.begin8_),
                end8_(other.end8_),
                current8_(other.current8_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_, *current6_, *current7_, *current8_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_ ||
                  current6_ == end6_ ||
                  current7_ == end7_ ||
                  current8_ == end8_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        const typename ParamGenerator::iterator begin6_;

        const typename ParamGenerator::iterator end6_;

        typename ParamGenerator::iterator current6_;

        const typename ParamGenerator::iterator begin7_;

        const typename ParamGenerator::iterator end7_;

        typename ParamGenerator::iterator current7_;

        const typename ParamGenerator::iterator begin8_;

        const typename ParamGenerator::iterator end8_;

        typename ParamGenerator::iterator current8_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator8::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator8<T1, T2, T3, T4, T5, T6, T7, T8> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

    const ParamGenerator<T6> g6_;

    const ParamGenerator<T7> g7_;

    const ParamGenerator<T8> g8_;

};
// class CartesianProductGenerator8
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
class CartesianProductGenerator9 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8, T9> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9> ParamType;

    inline CartesianProductGenerator9(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5, const ParamGenerator<T6> & g6, const ParamGenerator<T7> & g7, const ParamGenerator<T8> & g8, const ParamGenerator<T9> & g9) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
              g9_(g9) {};

    inline virtual ~CartesianProductGenerator9() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin(), g6_, g6_.begin(), g7_,
            g7_.begin(), g8_, g8_.begin(), g9_, g9_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end(), g6_, g6_.end(), g7_, g7_.end(), g8_,
            g8_.end(), g9_, g9_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5, const ParamGenerator<T6> & g6, const typename ParamGenerator::iterator & current6, const ParamGenerator<T7> & g7, const typename ParamGenerator::iterator & current7, const ParamGenerator<T8> & g8, const typename ParamGenerator::iterator & current8, const ParamGenerator<T9> & g9, const typename ParamGenerator::iterator & current9) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
                  begin6_(g6.begin()), end6_(g6.end()), current6_(current6),
                  begin7_(g7.begin()), end7_(g7.end()), current7_(current7),
                  begin8_(g8.begin()), end8_(g8.end()), current8_(current8),
                  begin9_(g9.begin()), end9_(g9.end()), current9_(current9)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current9_;
              if (current9_ == end9_) {
                current9_ = begin9_;
                ++current8_;
              }
              if (current8_ == end8_) {
                current8_ = begin8_;
                ++current7_;
              }
              if (current7_ == end7_) {
                current7_ = begin7_;
                ++current6_;
              }
              if (current6_ == end6_) {
                current6_ = begin6_;
                ++current5_;
              }
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_ &&
                  current6_ == typed_other->current6_ &&
                  current7_ == typed_other->current7_ &&
                  current8_ == typed_other->current8_ &&
                  current9_ == typed_other->current9_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_),
                begin6_(other.begin6_),
                end6_(other.end6_),
                current6_(other.current6_),
                begin7_(other.begin7_),
                end7_(other.end7_),
                current7_(other.current7_),
                begin8_(other.begin8_),
                end8_(other.end8_),
                current8_(other.current8_),
                begin9_(other.begin9_),
                end9_(other.end9_),
                current9_(other.current9_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_, *current6_, *current7_, *current8_,
                    *current9_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_ ||
                  current6_ == end6_ ||
                  current7_ == end7_ ||
                  current8_ == end8_ ||
                  current9_ == end9_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        const typename ParamGenerator::iterator begin6_;

        const typename ParamGenerator::iterator end6_;

        typename ParamGenerator::iterator current6_;

        const typename ParamGenerator::iterator begin7_;

        const typename ParamGenerator::iterator end7_;

        typename ParamGenerator::iterator current7_;

        const typename ParamGenerator::iterator begin8_;

        const typename ParamGenerator::iterator end8_;

        typename ParamGenerator::iterator current8_;

        const typename ParamGenerator::iterator begin9_;

        const typename ParamGenerator::iterator end9_;

        typename ParamGenerator::iterator current9_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator9::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator9<T1, T2, T3, T4, T5, T6, T7, T8, T9> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

    const ParamGenerator<T6> g6_;

    const ParamGenerator<T7> g7_;

    const ParamGenerator<T8> g8_;

    const ParamGenerator<T9> g9_;

};
// class CartesianProductGenerator9
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
class CartesianProductGenerator10 : public ParamGeneratorInterface<::testing::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8, T9, T10> > {
  public:
    typedef ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> ParamType;

    inline CartesianProductGenerator10(const ParamGenerator<T1> & g1, const ParamGenerator<T2> & g2, const ParamGenerator<T3> & g3, const ParamGenerator<T4> & g4, const ParamGenerator<T5> & g5, const ParamGenerator<T6> & g6, const ParamGenerator<T7> & g7, const ParamGenerator<T8> & g8, const ParamGenerator<T9> & g9, const ParamGenerator<T10> & g10) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
              g9_(g9), g10_(g10) {};

    inline virtual ~CartesianProductGenerator10() {};

    inline virtual ParamIteratorInterface<ParamType> * Begin() const {
        return new Iterator(this, g1_, g1_.begin(), g2_, g2_.begin(), g3_,
            g3_.begin(), g4_, g4_.begin(), g5_, g5_.begin(), g6_, g6_.begin(), g7_,
            g7_.begin(), g8_, g8_.begin(), g9_, g9_.begin(), g10_, g10_.begin());
      };

    inline virtual ParamIteratorInterface<ParamType> * End() const {
        return new Iterator(this, g1_, g1_.end(), g2_, g2_.end(), g3_, g3_.end(),
            g4_, g4_.end(), g5_, g5_.end(), g6_, g6_.end(), g7_, g7_.end(), g8_,
            g8_.end(), g9_, g9_.end(), g10_, g10_.end());
      };

    class Iterator : public ParamIteratorInterface<ParamType> {
      public:
        inline Iterator(const ParamGeneratorInterface<ParamType> * base, const ParamGenerator<T1> & g1, const typename ParamGenerator::iterator & current1, const ParamGenerator<T2> & g2, const typename ParamGenerator::iterator & current2, const ParamGenerator<T3> & g3, const typename ParamGenerator::iterator & current3, const ParamGenerator<T4> & g4, const typename ParamGenerator::iterator & current4, const ParamGenerator<T5> & g5, const typename ParamGenerator::iterator & current5, const ParamGenerator<T6> & g6, const typename ParamGenerator::iterator & current6, const ParamGenerator<T7> & g7, const typename ParamGenerator::iterator & current7, const ParamGenerator<T8> & g8, const typename ParamGenerator::iterator & current8, const ParamGenerator<T9> & g9, const typename ParamGenerator::iterator & current9, const ParamGenerator<T10> & g10, const typename ParamGenerator::iterator & current10) : base_(base),
                  begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
                  begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
                  begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
                  begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
                  begin5_(g5.begin()), end5_(g5.end()), current5_(current5),
                  begin6_(g6.begin()), end6_(g6.end()), current6_(current6),
                  begin7_(g7.begin()), end7_(g7.end()), current7_(current7),
                  begin8_(g8.begin()), end8_(g8.end()), current8_(current8),
                  begin9_(g9.begin()), end9_(g9.end()), current9_(current9),
                  begin10_(g10.begin()), end10_(g10.end()), current10_(current10)    {
              ComputeCurrentValue();
            };

        inline virtual ~Iterator() {};

        inline virtual const ParamGeneratorInterface<ParamType> * BaseGenerator() const {
              return base_;
            };

        // Advance should not be called on beyond-of-range iterators
        // so no component iterators must be beyond end of range, either.
        inline virtual void Advance() {
              assert(!AtEnd());
              ++current10_;
              if (current10_ == end10_) {
                current10_ = begin10_;
                ++current9_;
              }
              if (current9_ == end9_) {
                current9_ = begin9_;
                ++current8_;
              }
              if (current8_ == end8_) {
                current8_ = begin8_;
                ++current7_;
              }
              if (current7_ == end7_) {
                current7_ = begin7_;
                ++current6_;
              }
              if (current6_ == end6_) {
                current6_ = begin6_;
                ++current5_;
              }
              if (current5_ == end5_) {
                current5_ = begin5_;
                ++current4_;
              }
              if (current4_ == end4_) {
                current4_ = begin4_;
                ++current3_;
              }
              if (current3_ == end3_) {
                current3_ = begin3_;
                ++current2_;
              }
              if (current2_ == end2_) {
                current2_ = begin2_;
                ++current1_;
              }
              ComputeCurrentValue();
            };

        inline virtual ParamIteratorInterface<ParamType> * Clone() const {
              return new Iterator(*this);
            };

        inline virtual const ParamType * Current() const { return current_value_.get(); };

        inline virtual bool Equals(const ParamIteratorInterface<ParamType> & other) const {
              // Having the same base generator guarantees that the other
              // iterator is of the same type and we can downcast.
              GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
                  << "The program attempted to compare iterators "
                  << "from different generators." << std::endl;
              const Iterator* typed_other =
                  CheckedDowncastToActualType<const Iterator>(&other);
              // We must report iterators equal if they both point beyond their
              // respective ranges. That can happen in a variety of fashions,
              // so we have to consult AtEnd().
              return (AtEnd() && typed_other->AtEnd()) ||
                 (
                  current1_ == typed_other->current1_ &&
                  current2_ == typed_other->current2_ &&
                  current3_ == typed_other->current3_ &&
                  current4_ == typed_other->current4_ &&
                  current5_ == typed_other->current5_ &&
                  current6_ == typed_other->current6_ &&
                  current7_ == typed_other->current7_ &&
                  current8_ == typed_other->current8_ &&
                  current9_ == typed_other->current9_ &&
                  current10_ == typed_other->current10_);
            };


      private:
        inline Iterator(const Iterator & other) : base_(other.base_),
                begin1_(other.begin1_),
                end1_(other.end1_),
                current1_(other.current1_),
                begin2_(other.begin2_),
                end2_(other.end2_),
                current2_(other.current2_),
                begin3_(other.begin3_),
                end3_(other.end3_),
                current3_(other.current3_),
                begin4_(other.begin4_),
                end4_(other.end4_),
                current4_(other.current4_),
                begin5_(other.begin5_),
                end5_(other.end5_),
                current5_(other.current5_),
                begin6_(other.begin6_),
                end6_(other.end6_),
                current6_(other.current6_),
                begin7_(other.begin7_),
                end7_(other.end7_),
                current7_(other.current7_),
                begin8_(other.begin8_),
                end8_(other.end8_),
                current8_(other.current8_),
                begin9_(other.begin9_),
                end9_(other.end9_),
                current9_(other.current9_),
                begin10_(other.begin10_),
                end10_(other.end10_),
                current10_(other.current10_) {
              ComputeCurrentValue();
            };

        inline void ComputeCurrentValue() {
              if (!AtEnd())
                current_value_.reset(new ParamType(*current1_, *current2_, *current3_,
                    *current4_, *current5_, *current6_, *current7_, *current8_,
                    *current9_, *current10_));
            };

        inline bool AtEnd() const {
              // We must report iterator past the end of the range when either of the
              // component iterators has reached the end of its range.
              return
                  current1_ == end1_ ||
                  current2_ == end2_ ||
                  current3_ == end3_ ||
                  current4_ == end4_ ||
                  current5_ == end5_ ||
                  current6_ == end6_ ||
                  current7_ == end7_ ||
                  current8_ == end8_ ||
                  current9_ == end9_ ||
                  current10_ == end10_;
            };

        // No implementation - assignment is unsupported.
        void operator =(const Iterator & other);

        const ParamGeneratorInterface<ParamType> * const base_;

        // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
        // current[i]_ is the actual traversing iterator.
        
        const typename ParamGenerator::iterator begin1_;

        const typename ParamGenerator::iterator end1_;

        typename ParamGenerator::iterator current1_;

        const typename ParamGenerator::iterator begin2_;

        const typename ParamGenerator::iterator end2_;

        typename ParamGenerator::iterator current2_;

        const typename ParamGenerator::iterator begin3_;

        const typename ParamGenerator::iterator end3_;

        typename ParamGenerator::iterator current3_;

        const typename ParamGenerator::iterator begin4_;

        const typename ParamGenerator::iterator end4_;

        typename ParamGenerator::iterator current4_;

        const typename ParamGenerator::iterator begin5_;

        const typename ParamGenerator::iterator end5_;

        typename ParamGenerator::iterator current5_;

        const typename ParamGenerator::iterator begin6_;

        const typename ParamGenerator::iterator end6_;

        typename ParamGenerator::iterator current6_;

        const typename ParamGenerator::iterator begin7_;

        const typename ParamGenerator::iterator end7_;

        typename ParamGenerator::iterator current7_;

        const typename ParamGenerator::iterator begin8_;

        const typename ParamGenerator::iterator end8_;

        typename ParamGenerator::iterator current8_;

        const typename ParamGenerator::iterator begin9_;

        const typename ParamGenerator::iterator end9_;

        typename ParamGenerator::iterator current9_;

        const typename ParamGenerator::iterator begin10_;

        const typename ParamGenerator::iterator end10_;

        typename ParamGenerator::iterator current10_;

        linked_ptr<ParamType> current_value_;

    };
    

  private:
    // class CartesianProductGenerator10::Iterator
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductGenerator10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> & other);

    const ParamGenerator<T1> g1_;

    const ParamGenerator<T2> g2_;

    const ParamGenerator<T3> g3_;

    const ParamGenerator<T4> g4_;

    const ParamGenerator<T5> g5_;

    const ParamGenerator<T6> g6_;

    const ParamGenerator<T7> g7_;

    const ParamGenerator<T8> g8_;

    const ParamGenerator<T9> g9_;

    const ParamGenerator<T10> g10_;

};
// class CartesianProductGenerator10
// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Helper classes providing Combine() with polymorphic features. They allow
// casting CartesianProductGeneratorN<T> to ParamGenerator<U> if T is
// convertible to U.
//
template<class Generator1, class Generator2>
class CartesianProductHolder2 {
  public:
    inline CartesianProductHolder2(const Generator1 & g1, const Generator2 & g2) : g1_(g1), g2_(g2) {};

    template<typename T1, typename T2>
    inline operator ParamGenerator< ::testing::tuple<T1, T2> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2> >(
            new CartesianProductGenerator2<T1, T2>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder2<Generator1, Generator2> & other);

    const Generator1 g1_;

    const Generator2 g2_;

};
// class CartesianProductHolder2
template<class Generator1, class Generator2, class Generator3>
class CartesianProductHolder3 {
  public:
    inline CartesianProductHolder3(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3) : g1_(g1), g2_(g2), g3_(g3) {};

    template<typename T1, typename T2, typename T3>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3> >(
            new CartesianProductGenerator3<T1, T2, T3>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder3<Generator1, Generator2, Generator3> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

};
// class CartesianProductHolder3
template<class Generator1, class Generator2, class Generator3, class Generator4>
class CartesianProductHolder4 {
  public:
    inline CartesianProductHolder4(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4) : g1_(g1), g2_(g2), g3_(g3), g4_(g4) {};

    template<typename T1, typename T2, typename T3, typename T4>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4> >(
            new CartesianProductGenerator4<T1, T2, T3, T4>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder4<Generator1, Generator2, Generator3, Generator4> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

};
// class CartesianProductHolder4
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5>
class CartesianProductHolder5 {
  public:
    inline CartesianProductHolder5(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5> >(
            new CartesianProductGenerator5<T1, T2, T3, T4, T5>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder5<Generator1, Generator2, Generator3, Generator4, Generator5> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

};
// class CartesianProductHolder5
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5, class Generator6>
class CartesianProductHolder6 {
  public:
    inline CartesianProductHolder6(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5, const Generator6 & g6) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6> >(
            new CartesianProductGenerator6<T1, T2, T3, T4, T5, T6>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_),
            static_cast<ParamGenerator<T6> >(g6_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder6<Generator1, Generator2, Generator3, Generator4, Generator5, Generator6> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

    const Generator6 g6_;

};
// class CartesianProductHolder6
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5, class Generator6, class Generator7>
class CartesianProductHolder7 {
  public:
    inline CartesianProductHolder7(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5, const Generator6 & g6, const Generator7 & g7) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6,
      T7> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7> >(
            new CartesianProductGenerator7<T1, T2, T3, T4, T5, T6, T7>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_),
            static_cast<ParamGenerator<T6> >(g6_),
            static_cast<ParamGenerator<T7> >(g7_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder7<Generator1, Generator2, Generator3, Generator4, Generator5, Generator6, Generator7> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

    const Generator6 g6_;

    const Generator7 g7_;

};
// class CartesianProductHolder7
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5, class Generator6, class Generator7, class Generator8>
class CartesianProductHolder8 {
  public:
    inline CartesianProductHolder8(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5, const Generator6 & g6, const Generator7 & g7, const Generator8 & g8) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7),
              g8_(g8) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7,
      T8> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8> >(
            new CartesianProductGenerator8<T1, T2, T3, T4, T5, T6, T7, T8>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_),
            static_cast<ParamGenerator<T6> >(g6_),
            static_cast<ParamGenerator<T7> >(g7_),
            static_cast<ParamGenerator<T8> >(g8_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder8<Generator1, Generator2, Generator3, Generator4, Generator5, Generator6, Generator7, Generator8> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

    const Generator6 g6_;

    const Generator7 g7_;

    const Generator8 g8_;

};
// class CartesianProductHolder8
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5, class Generator6, class Generator7, class Generator8, class Generator9>
class CartesianProductHolder9 {
  public:
    inline CartesianProductHolder9(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5, const Generator6 & g6, const Generator7 & g7, const Generator8 & g8, const Generator9 & g9) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
              g9_(g9) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8,
      T9> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8,
            T9> >(
            new CartesianProductGenerator9<T1, T2, T3, T4, T5, T6, T7, T8, T9>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_),
            static_cast<ParamGenerator<T6> >(g6_),
            static_cast<ParamGenerator<T7> >(g7_),
            static_cast<ParamGenerator<T8> >(g8_),
            static_cast<ParamGenerator<T9> >(g9_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder9<Generator1, Generator2, Generator3, Generator4, Generator5, Generator6, Generator7, Generator8, Generator9> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

    const Generator6 g6_;

    const Generator7 g7_;

    const Generator8 g8_;

    const Generator9 g9_;

};
// class CartesianProductHolder9
template<class Generator1, class Generator2, class Generator3, class Generator4, class Generator5, class Generator6, class Generator7, class Generator8, class Generator9, class Generator10>
class CartesianProductHolder10 {
  public:
    inline CartesianProductHolder10(const Generator1 & g1, const Generator2 & g2, const Generator3 & g3, const Generator4 & g4, const Generator5 & g5, const Generator6 & g6, const Generator7 & g7, const Generator8 & g8, const Generator9 & g9, const Generator10 & g10) : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
              g9_(g9), g10_(g10) {};

    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
    inline operator ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9,
      T10> >() const {
        return ParamGenerator< ::testing::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9,
            T10> >(
            new CartesianProductGenerator10<T1, T2, T3, T4, T5, T6, T7, T8, T9,
                T10>(
            static_cast<ParamGenerator<T1> >(g1_),
            static_cast<ParamGenerator<T2> >(g2_),
            static_cast<ParamGenerator<T3> >(g3_),
            static_cast<ParamGenerator<T4> >(g4_),
            static_cast<ParamGenerator<T5> >(g5_),
            static_cast<ParamGenerator<T6> >(g6_),
            static_cast<ParamGenerator<T7> >(g7_),
            static_cast<ParamGenerator<T8> >(g8_),
            static_cast<ParamGenerator<T9> >(g9_),
            static_cast<ParamGenerator<T10> >(g10_)));
      };


  private:
    // No implementation - assignment is unsupported.
    void operator =(const CartesianProductHolder10<Generator1, Generator2, Generator3, Generator4, Generator5, Generator6, Generator7, Generator8, Generator9, Generator10> & other);

    const Generator1 g1_;

    const Generator2 g2_;

    const Generator3 g3_;

    const Generator4 g4_;

    const Generator5 g5_;

    const Generator6 g6_;

    const Generator7 g7_;

    const Generator8 g8_;

    const Generator9 g9_;

    const Generator10 g10_;

};

} // namespace testing::internal

} // namespace testing
#endif
