import React from "react";
import { StyleSheet, Text, View } from "react-native";

export default function Loading() {
    return (
        <View style={style.container}>
            <Text style={style.text}>Getting the good weather</Text>
        </View>
    );
}

const style = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: 'flex-end',
        paddingHorizontal: 30,
        paddingVertical: 100,
        backgroundColor: '#FDF6AA'
    },
    text: {
        color: '#2c2c2c',
        fonrSize: 30
    }
});
